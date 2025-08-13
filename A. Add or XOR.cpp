#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        int cost = 0;
        cin >> a >> b >> x >> y;

        if (a > b + 1) {
            cost = -1;
        }
        else if (a > b) {

            int temp = a ^ 1;
            if (temp == b) {
                a = temp;   
                cost += y;
            } else {
                cost = -1;  
            }
        }
        else {
            while (a < b) {
                if (x > y && a % 2 == 0) {
                    a = a ^ 1;
                    cost += y;
                }
                else {
                    a += 1;
                    cost += x;
                }
            }
        }

        cout << cost << "\n";
    }
}
