#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a=0,d=0;
  char s[n];
  for (int i = 0;i<n;i++){
    cin>>s[i];
    if (s[i]=='A'){
      a++;
    }
    else if (s[i]=='D'){
      d++;
    }
    else
      return 0;
  }
  if (a>d){
    cout<<"Anton"<<endl;
  }
  else if (a<d){
    cout<<"Danik"<<endl;
  }
  else
    cout<<"Friendship"<<endl;
  return 0;
}
