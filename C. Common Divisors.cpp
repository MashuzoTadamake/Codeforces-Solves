#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    long long g=0;
    long long cnt=0;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        g= __gcd(g,a[i]);
    }
    for(long long i=1;i*i<=g;i++){
        if(g%i==0){
            cnt++;
            if(i*i!=g){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
