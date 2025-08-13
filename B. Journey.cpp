#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,a,b,c;
        cin>>n>>a>>b>>c;
        long long sum=a+b+c;
        long long day=n/sum;
        long long rem=n%sum;
        if(rem==0){
            cout<< day*3<<endl;
            continue;
        }
        if(rem<=a){
            cout<<day*3+1<<endl;
        }
        else if(rem<=a+b){
            cout<<day*3+2<<endl;
        }
        else{
            cout<<day*3+3<<endl;
        }
    }
    return 0;
}
