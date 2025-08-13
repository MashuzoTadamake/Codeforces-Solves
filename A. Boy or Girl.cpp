#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto c : s) {
    mp[c]++;
  }
  int cnt;
  for (const auto& pair : mp) {
    if (pair.second >= 1) {
      cnt++;
    }
  }
  if (cnt % 2 == 0) {
    cout << "CHAT WITH HER!" << nl;
  } else {
    cout << "IGNORE HIM!" << nl;
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  // cin >> tc;
  while (tc--) solve();
}
