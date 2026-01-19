# Codeforces Learning Workspace

Structured workspace for Codeforces practice with full tracking across C++, Java, and Go.

## Supported Languages

- **C++17** - Fast I/O with custom scanner, debug utilities
- **Java 17** - FastScanner for competitive programming
- **Go 1.21** - Fast input/output utilities

## Structure

```
codeforces-workspace/
├── templates/           # Language templates with optimized I/O
│   ├── cpp/            # C++ templates
│   ├── java/           # Java templates
│   └── go/             # Go templates
├── solutions/          # Solutions organized by rating
│   ├── 800-1000/       # Beginner problems
│   ├── 1000-1200/      # Easy problems
│   ├── 1200-1400/      # Medium problems
│   ├── 1400-1600/      # Hard problems
│   └── 1600+/          # Expert problems
├── tracking/           # Performance metrics
│   ├── problems.csv    # Problem attempts log
│   ├── contests.csv    # Contest history
│   └── notes/          # Learning notes
└── scripts/            # Automation tools
    ├── run_test.sh     # Test solutions locally
    ├── submit.sh       # Log submissions
    └── stats.sh        # View progress
```

## Quick Start

1. **Copy template for your language:**
   ```bash
   cp templates/cpp/main.cpp solutions/1200-1400/problem_name.cpp
   ```

2. **Create sample input file:**
   ```bash
   echo "input here" > sample_input.txt
   ```

3. **Test locally:**
   ```bash
   ./scripts/run_test.sh cpp solution.cpp < sample_input.txt
   ```

4. **After contest, log results:**
   ```bash
   ./scripts/submit.sh 1829A cpp AC +15
   ```

5. **View progress:**
   ```bash
   ./scripts/stats.sh
   ```

## Tracking Format

### problems.csv
```
date,problem_id,problem_name,difficulty,rating_change,language,verdict,time_minutes,notes
```

### contests.csv
```
date,contest_id,contest_name,position,rating_before,rating_after,problems_solved,total_time
```

## Best Practices

- Log every problem attempt after submission
- Add notes on approach and lessons learned
- Review weak topics using notes in `tracking/notes/`
- Track rating changes after each contest

## Tips

- Use C++ for time-critical problems (fastest execution)
- Java for problems requiring BigInteger or complex libraries
- Go for learning/practice (growing ecosystem)
- Run `stats.sh` regularly to track improvement
