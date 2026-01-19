# Codeforces Learning Workspace

Structured workspace for Codeforces practice with full tracking.

## Structure

- `templates/` - Language templates with fast I/O
- `solutions/` - Solutions organized by difficulty rating
- `tracking/` - CSV logs for problems and contests
- `scripts/` - Automation tools

## Quick Start

1. Copy template for your language:
   ```bash
   cp templates/cpp/main.cpp solutions/1200-1400/problem_name.cpp
   ```

2. Test locally:
   ```bash
   ./scripts/run_test.sh cpp solution.cpp < sample_input.txt
   ```

3. After contest, log results:
   ```bash
   ./scripts/submit.sh 1829A cpp AC +15
   ```

4. View progress:
   ```bash
   ./scripts/stats.sh
   ```
