#!/bin/sh
gcc ex1.c -o ex1
for i in {1..10}
do
    ./ex1
    echo ""
done
rm ./ex1