#!/bin/bash


echo "排序結果（依平均分數降序排列）："
while IFS=: read -r name english unix; do
    total=$((english + unix))
    avg=$(awk "BEGIN { printf \"%.2f\", $total / 2 }")
    
    
    if [[ $avg == *.00 ]]; then
        avg=${avg%.*}
    fi

    
    avg=${avg/.50/.5}

    printf "%-6s %3d %3d avg=%s\n" "$name" "$english" "$unix" "$avg"
done < testdata.txt | sort -t= -k2,2nr
