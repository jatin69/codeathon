// from hackerrank
// passes test case

#include <bits/stdc++.h>
using namespace std;

#define as(n, a, b) assert(a <= n && n <= b);

int main() {
  int t;
  cin >> t;
  as(t, 1, 5);
  while (t--) {
    int n, x;
    cin >> n;
    as(n, 1, 100000);
    int val = 0;
    for (int i = 1; i <= n; i++) {
      cin >> x;
      as(x, 1, 100000000);
      if (i % 2 != 0)
        val = val ^ x;
    }
    if (n % 2 == 0)
      cout << 0 << endl;
    else
      cout << val << endl;
  }
}
