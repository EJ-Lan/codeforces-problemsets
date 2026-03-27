#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int a, b;
	cin >> a >> b;

	if (a < b) {
		swap(a, b);
	}

	int ans = 0;
	int cur = 1;
	int x = 0;
	int y = 0;

	while (true) {
		ll next_y = x;
		ll next_x = y + cur;
		
		if (max(next_x, next_y) <= a && min (next_x, next_y) <= b) {
			x = next_x;
			y = next_y;
			ans += 1;
			cur *= 2;
		} else {
			break;
		}
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) solve();
}
