#include<iostream>
using namespace std;
int main()
{
int n,x,y;
cin>>n>>x>>y;
if(y%x==0) n=n-y/x;
else n=n-y/x-1;
if(n<0) n=0;
cout<<n;
return 0;
}