#!/bin/bash

temp_file=$(mktemp)

while IFS=':' read -r name score1 score2; do
    avg=$(echo "scale=2; ($score1 + $score2) / 2" | bc) 
    printf "%s\t%d\t%d\t%.2f\n" "$name" "$score1" "$score2" "$avg" >> "$temp_file"
done < testdata.txt

sorted_file=$(mktemp)
sort -r -k4 -n "$temp_file" > "$sorted_file"

while IFS=$'\t' read -r n s1 s2 a; do
    printf "%s\t%5d\t%5d\tavg=%.2f\n" "$n" "$s1" "$s2" "$a"
done < "$sorted_file"

rm "$temp_file" "$sorted_file"
