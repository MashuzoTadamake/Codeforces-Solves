#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n =str.length();
    int counnt=0;
    char arr[n+1];
    strcpy(arr,str.c_str());
    for(int i = 0;i<n;i++){
        if(isupper(arr[i])){
            counnt++;
        }
    }
    if(counnt>n/2){
        transform(str.begin(),str.end(),str.begin() ,::toupper);
    }
    else{
        transform(str.begin(),str.end(),str.begin(), ::tolower);
    }
    cout<<str;

}
