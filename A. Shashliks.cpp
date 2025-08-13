#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  ll k, a, b, x, y;
  cin >> k >> a >> b >> x >> y;
  ll shashliks = 0;
  if (x > y) {
    swap(x, y);
    swap(a, b);
  }
  ll tempa = k - a;
  if (tempa >= 0) {
    shashliks += tempa / x;
    shashliks++;
    k -= shashliks * x;
  }
  ll tempb = k - b;
  if (tempb >= 0) {
    shashliks += tempb / y;
    shashliks++;
  }
  cout << shashliks << nl;
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
