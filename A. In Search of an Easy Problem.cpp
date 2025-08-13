#include <iostream>
using namespace std;
int main() {
  int n;
  int sum=0;
  cin>>n;
  int t;
  for(int i=0;i<n;i++){
    cin>>t;
    sum+=t;
  }
  if (sum==0){
    cout<<"EASY"<<endl;
  }
  else {
    cout<<"HARD"<<endl;
  }
}
