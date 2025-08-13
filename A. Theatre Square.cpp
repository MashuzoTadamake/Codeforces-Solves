// Mashuzo solves :3
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  int n, m, a;
  cin >> n >> m >> a;
  ll flagstone = ceil((double)n / a) * ceil((double)m / a);
  cout << flagstone << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  // cin >> tc;
  while (tc--) solve();
}
