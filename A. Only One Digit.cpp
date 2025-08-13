#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  int x;
  cin >> x;
  int mn = 9999;
  while (x != 0) {
    int temp = x % 10;
    mn = min(mn, temp);
    x = x / 10;
  }
  cout << mn << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
