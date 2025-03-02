#!/bin/bash

# Read input
read n d
notes=()

# Read notes into an array
for ((i=0; i<n; i++)); do
    read notes[i]
done

# Sort the notes
IFS=$'\n' sorted=($(sort -n <<<"${notes[*]}"))
unset IFS

# Process sorted notes
recordings=0
i=0

while (( i < n )); do
    ((recordings++))
    min_pitch=${sorted[i]}
    max_pitch=$((min_pitch + d))
    while (( i < n && sorted[i] <= max_pitch )); do
        ((i++))
    done
done

echo $recordings