#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  
  int cyclic_transitions = 0;
  bool has_duplicates = false;

  for (int i = 0; i < n; i++) {
    if (s[i] != s[(i + 1) % n]) {
      cyclic_transitions++;
    } else {
      has_duplicates = true;
    }
  }

  int result = cyclic_transitions + (has_duplicates ? 1 : 0);

  cout << result << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
