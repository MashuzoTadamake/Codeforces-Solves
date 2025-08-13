#include <iostream>

using namespace std;
int main() {
  int n=0,a=0,b=0;
  int total=0;
  int max=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    total=total-a+b;
    if (total>max){
        max=total;
    }
  }
  cout<<max;
}
