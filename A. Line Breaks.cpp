#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        int sum=0;
        cin>>n>>m;
        while(n--){
            string s;     
            cin>>s;
            int len=s.length();
            if (m < len) {
                sum=sum+0;
                m=0;
            }
            else{
                sum+=1;
                m-=len;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
