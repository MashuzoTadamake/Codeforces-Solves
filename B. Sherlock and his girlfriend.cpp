#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    vector<int> color(n+2,1);
    if(n<=2){

        cout<<1<<"\n";
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
    }
    else{
        for(int i=2;i*i<=n+1;i++){
            if(color[i]==1){
                for(int j=i*i;j<=n+1;j+=i){
                    color[j]=2;
                }
            }
        }
        cout<<2<<"\n";
        for(int i=2;i<=n+1;i++){
            cout<<color[i]<<" ";
        }
    }
    return 0;
}
