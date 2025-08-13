#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x--) {
        int n;
        cin >> n;
        set<int> s;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            for(int j=0;j<n;j++){
                s.insert(a[i]+b[j]);
            }
        }
        if (s.size() >= 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
