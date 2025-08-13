#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int remainingSeats = 2 * m;
        if (a <= m) {
            remainingSeats -= a;
        } else {
            remainingSeats -= m;
        }

        if (b <= m) {
            remainingSeats -= b;
        } else {
            remainingSeats -= m;
        }

        if (c <= remainingSeats) {
            remainingSeats -= c;
        } else {
            remainingSeats = 0; 
        }

        int seated = 2 * m - remainingSeats;

        cout << seated << endl;
    }

    return 0;
}
