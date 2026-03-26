#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  
  int count = 0;
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] == 'Y') {
      count += 1;
    }    
  }

  if (count >= 2) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
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
