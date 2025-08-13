#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
bool is_prime(int x) {
  if (x == 0) {
    return false;
  }
  if (x == 2) {
    return true;
  }
  if (x % 2 == 0) {
    return false;
  }
  for (int i = 3; i * i <= x; i += 2) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
void solve() {
  ll x;
  ll k;
  cin >> x >> k;
  if (is_prime(x) == false) {
    cout << "NO" << nl;
  } else {
    if (x == 1 and k != 2) {
      cout << "NO" << nl;
    } else if (x == 1 and k == 2) {
      cout << "YES" << nl;
    } else if (k == 1) {
      cout << "YES" << nl;
    } else {
      cout << "NO" << nl;
    }
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
