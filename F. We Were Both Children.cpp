#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>cnt(n+1);
        vector<int> v(n);
        vector<int> a(n+1);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] <= n){
                cnt[v[i]]++;
            }
        }
        for (int i = 1; i <= n; i++){
            for(int j = i; j <= n; j+=i){
                a[j]+=cnt[i];
            }
        }
    cout<<*max_element(a.begin(),a.end())<<'\n';
    }
}
