#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t--){
        cin>>a>>b;
        int rem=a%b;
        if(rem==0){
            c=0;
        }
        else{
            c=b-rem;
        }
        cout<<c<<endl;
	}
	return 0;
}
