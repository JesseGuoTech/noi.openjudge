#include <cstdio>
int main(){
	double a;
	scanf("%lf",&a);
	if(a<0)
	printf("%.2lf",-a);
	if(a>=0)
	printf("%.2lf",a);
	return 0;
	}