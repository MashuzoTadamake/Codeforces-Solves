#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        for(int i=s.length()-1;i>=0;i--){
            if (s[i] == 'p') {
                cout << "q";
            } else if (s[i] == 'q') {
                cout << "p";
            } else {
                cout << s[i]; 
            }
        }
        cout<<"\n";
    }
    return 0;
}
