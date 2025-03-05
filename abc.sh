#!/bin/bash

# Read input
read -a numbers

read order

# Sort numbers
IFS=$'\n' sorted=($(sort -n <<<"${numbers[*]}"))
unset IFS

for ((i=0; i<${#order}; i++)); do
    case ${order:$i:1} in
        A)
            echo "${sorted[0]} "
            ;;
        B)
            echo "${sorted[1]} "
            ;;
        C)
            echo "${sorted[2]} "
            ;;
    esac
done