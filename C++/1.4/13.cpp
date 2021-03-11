#include<stdio.h>
int main()
{
double x;
scanf("%lf",&x);
if(x>=0&&x<5)
printf("%.3lf",0-x+2.5);
if(x>=5&&x<10)
printf("%.3lf",2-1.5*(x-3)*(x-3));
if(x>=10&&x<20)
printf("%.3lf",x/2-1.5);
return 0;
}