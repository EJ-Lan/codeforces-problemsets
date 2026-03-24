#include <iostream>

using namespace std;

int main() {
  int t;
  cin >>t;

  while (t--) {
    int n, s, x;
    cin >> n >> s >> x;

    int current_sum = 0;
    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;
      current_sum += val;
    }

    int gap = s - current_sum;

    if (gap >=0 && gap % x == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
