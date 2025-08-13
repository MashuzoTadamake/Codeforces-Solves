#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y,a,b,c,d;
    cin>>y;
    
    for(y=y+1;;y++){
        a=y%10;
        b=(y%100)/10;
        c=(y%1000)/100;
        d=(y%10000)/1000;
        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d)
            break;
    }
    printf("%d",y);
}
