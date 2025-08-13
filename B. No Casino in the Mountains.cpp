#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0, brk = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == 0 and brk < k) {  // 0 brk=1
      brk++;
    } else if (brk == k) {  // cnt=1 brk=1
      cnt++;
      brk = 0;
    } else {  // brk 0
      brk = 0;
    }
  }
  if (brk == k) {
    cnt++;
  }
  cout << cnt << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
