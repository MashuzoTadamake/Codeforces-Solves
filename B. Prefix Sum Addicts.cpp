#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n + 1);
  vector<ll> pf(k + 1);  //

  for (ll i = 1; i <= k; i++) {
    cin >> pf[i];
  }
  if (k == 1) {
    cout << "Yes" << nl;
    return;
  }
  if (n == k) {
    v[1] = pf[1];
    for (ll i = 2; i <= n; i++) {
      v[i] = pf[i] - pf[i - 1];
    }
    if (is_sorted(v.begin() + 1, v.end())) {
      cout << "Yes" << nl;
      return;
    } else {
      cout << "No" << nl;
      return;
    }
  }
  ll j = n;
  ll i = k;
  for (; i > 1; i--) {  //
    v[j] = pf[i] - pf[i - 1];
    j--;
  }
  ll cnt = 0;
  for (ll l = j; l > 1; l--) {
    v[l] = v[j + 1];
    cnt++;
  }
  v[1] = pf[1] - cnt * v[2];
  if (is_sorted(v.begin() + 1, v.end())) {
    cout << "Yes" << nl;
    return;
  } else {
    cout << "No" << nl;
    return;
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
