# Codeforces Problemsets

Minimal C++ problemsets for Codeforces.

## What is in this repo

- My attempts and solutions, organized by Codeforces problem ID (example: `2178A.cpp`, `2193B.cpp`).
- A reusable starter file: `template.cpp`.

## File naming

Each solution file follows this format:

- `<problem_id><letter>.cpp`
- Example: `2194A.cpp` means problem **2194A**.

## About `template.cpp`

`template.cpp` is my lightweight base for multi-test-case problems:

```cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	// logic for one test case
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) solve();
}
```

- `#include <bits/stdc++.h>`: pulls in most standard C++ headers quickly.
- `using namespace std;`: avoids writing `std::` repeatedly.
- `using ll = long long;`: avoids writing out `long long`.
- `ios::sync_with_stdio(false); cin.tie(nullptr);`: faster input/output.
- `solve()`: handles one test case.
- `main()`: reads `t` and runs `solve()` `t` times.

## Build and run (Windows, g++)

```bash
g++ -std=c++17 -O2 -Wall 2193A.cpp -o 2193A
./2193A
```

Then paste input directly into the terminal.
