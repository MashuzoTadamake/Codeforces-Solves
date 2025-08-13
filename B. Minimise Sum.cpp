#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (a[0] == 0) {
    cout << 0 << nl;
  } else if (a[1] == 0) {
    cout << a[0] << nl;
  } else {
    cout << a[0] + min(a[0], a[1]) << nl;
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
