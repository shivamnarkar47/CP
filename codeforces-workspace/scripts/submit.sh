#!/bin/bash
# Log submission to tracking

set -e

if [ $# -lt 3 ]; then
    echo "Usage: $0 <problem_id> <language> <verdict> [rating_change]"
    echo "Verdict: AC, WA, TLE, MLE, RE, CE"
    exit 1
fi

PROBLEM_ID=$1
LANG=$2
VERDICT=$3
RATING_CHANGE=${4:-0}

echo "$(date +%Y-%m-%d),$PROBLEM_ID,,,$RATING_CHANGE,$LANG,$VERDICT,,$NOTES" >> tracking/problems.csv
