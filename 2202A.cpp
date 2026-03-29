#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int x, y;
  cin >> x >> y;

  if (
      (x - 2 * y) % 3 == 0 &&
      (x - 2 * y) >= 0 &&
      (x + 4 * y) >= 0
      ) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}
