#include <iostream>

using namespace std;
int main() {
  int x=0;
  string s;
  int n;
  cin>>n;
  for (int i=0; i<n;i++){
    cin>>s;
    if (s=="X++"|| s=="++X"){
      x++;
    }
    else {
      x--;
    }
  }
  cout<<x;
}
