#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  int maybe;
  vector<ll> a(n, -1);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      cout << -1 << " ";

    } else if (n % 2 == 0 and i == n - 1) {
      cout << 2 << " ";
    } else {
      cout << 3 << " ";
    }
  }
  cout << nl;
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
