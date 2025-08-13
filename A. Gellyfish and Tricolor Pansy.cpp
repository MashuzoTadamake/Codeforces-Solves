#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if (min(a, c) >= min(b, d))
    printf("Gellyfish\n");
  else
    printf("Flower\n");
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
