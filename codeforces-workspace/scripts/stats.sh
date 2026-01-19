#!/bin/bash
# Show workspace statistics

echo "=== Codeforces Progress ==="
echo ""
echo "Problems solved by language:"
awk -F',' 'NR>1 {lang[$6]++} END {for (l in lang) print l ": " lang[l] " solved"}' tracking/problems.csv
echo ""
echo "Total problems: $(tail -n +2 tracking/problems.csv | wc -l)"
echo "Contests participated: $(tail -n +2 tracking/contests.csv | wc -l)"
