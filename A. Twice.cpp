#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (auto num : a) {
    mp[num]++;
  }
  int cnt = 0;
  for (const auto& pair : mp) {
    cnt += pair.second / 2;
  }
  cout << cnt << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
