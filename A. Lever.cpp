#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int iter = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    if (a[i] > b) {
      iter += a[i] - b;
    }
  }
  cout << iter + 1 << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
