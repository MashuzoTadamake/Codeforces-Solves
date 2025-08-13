#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
bool isPrime(int n) {
  if (n == 0) {
    return false;
  }
  if (n == 1) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  ll x;
  cin >> x;
  ll n = sqrtl(x);
  if (n * n == x and isPrime(n)) {
    cout << "YES" << nl;
  } else {
    cout << "NO" << nl;
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc = 1;
  cin >> tc;
  while (tc--) solve();
}
