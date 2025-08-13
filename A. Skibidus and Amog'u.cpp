#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        len=len-2;
        s.erase(len);
        string i="i";
        string plural=s+i;
        cout<<plural<<endl;
    }
    return 0;
}
