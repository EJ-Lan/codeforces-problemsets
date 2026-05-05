#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n, q;
  cin >> n >> q;

  vector<ll> a(n), b(n), best(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    best[i] = max(a[i], b[i]);
  }

  for (int i = n - 2; i >= 0; i--) {
    best[i] = max(best[i], best[i + 1]);
  }

  vector<ll> prefix(n + 1, 0);

  for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + best[i];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;

    l--;
    r--;

    ll ans = prefix[r + 1] - prefix[l];
    cout << ans << " ";
  }

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}
