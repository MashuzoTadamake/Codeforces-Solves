#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> sum(k);
  for (int i = 0; i < k; i++) {
    int b, c;
    cin >> b >> c;
    b--;
    sum[b] += c;
  }
  sort(sum.rbegin(), sum.rend());
  cout << accumulate(sum.begin(), sum.begin() + min(n, k), 0) << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
