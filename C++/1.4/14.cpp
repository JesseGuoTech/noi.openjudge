#include<iostream>
using namespace std;
int main()
{
long long a;
char b;
cin>>a>>b;
if(a<=1000 && b=='y')
cout<<13;
if(a<=1000 && b=='n')
cout<<8;
if(a>1000 && b=='y' && (a-1000)%500==0)
cout<<8+(a-1000)/500*4+5;
if(a>1000 && b=='n' && (a-1000)%500==0)
cout<<8+(a-1000)/500*4;
if(a>1000 && b=='y' && (a-1000)%500!=0)
cout<<8+((a-1000)/500+1)*4+5;
if(a>1000 && b=='n' && (a-1000)%500!=0)
cout<<8+((a-1000)/500+1)*4;

return 0;

}