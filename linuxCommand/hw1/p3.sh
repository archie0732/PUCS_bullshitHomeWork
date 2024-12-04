#!/bin/bash

while IFS=':' read -r product price qty; do
    total=$((price * qty))

    printf "%-10s\t%6d\t%5d\t%10d\n" "$product" "$price" "$qty" "$total"
done < product.txt
