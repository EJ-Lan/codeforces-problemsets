#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int get_d(ll n) {
  int s = 0;
  while (n > 0) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

void solve() {
  ll x;
  ll count = 0;
  cin >> x;

  if (x % 9 != 0) {
    cout << 0 << "\n";
    return;
  }

  for (ll y = x; y <= x + 100; y++) {
    if (y - get_d(y) == x) {
      count++;
    }
  }
  cout << count << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
