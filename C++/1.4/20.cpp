#include <stdio.h>
#include<math.h>
int main()
{
double a,b,c,x1,x2,m,n,h;
scanf("%lf %lf %lf",&a,&b,&c);
h=b*b-4*a*c;
if(h==0)
{
x1=x2=-b/(2*a);
printf("x1=x2=%.5lf",x1);
}
if(h>0)
{
x1=(-b+sqrt(h))/(2*a);
x2=(-b-sqrt(h))/(2*a);
if(x1>x2)
printf("x1=%.5lf;x2=%.5lf",x1,x2);
else
printf("x1=%.5lf;x2=%.5lf",x2,x1);
}
if(h<0)
{
m=0-b/(2*a);
n=(sqrt(-h))/(2*a);
if (a>0)
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",m,n,m,n);
else if(a<0) printf("x1=%.5lf-%.5lfi;x2=%.5lf+%.5lfi",m,n,m,n);
}
}