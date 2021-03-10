#include<cstdio>
int main()
{
double a,b,c,d,x,f;
scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
f=a*x*x*x+b*x*x+c*x+d;
printf("%.7lf",f);
return 0;
}