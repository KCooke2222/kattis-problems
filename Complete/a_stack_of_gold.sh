#!/bin/bash

# Read input
read w s

coins=$(( s * (s + 1) / 2))
stack=$(( (w - (coins * 29260)) / (29370 - 29260) ))

echo $stack