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
  sort(a.begin(), a.end());
  cout << a[n / 2] << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  // cin >> tc;
  while (tc--) solve();
}
