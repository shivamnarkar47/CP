#!/bin/bash
# Test solution against sample input

set -e

if [ $# -ne 2 ]; then
    echo "Usage: $0 <language> <file>"
    echo "Languages: cpp, java, go"
    exit 1
fi

LANG=$1
FILE=$2
NAME=$(basename "$FILE" .${FILE##*.})

case $LANG in
    cpp)
        g++ -std=c++17 -O2 -pipe -static -s -o "$NAME" "$FILE"
        ./"$NAME" < sample_input.txt
        ;;
    java)
        javac "$FILE"
        java "$NAME" < sample_input.txt
        ;;
    go)
        go run "$FILE" < sample_input.txt
        ;;
esac
