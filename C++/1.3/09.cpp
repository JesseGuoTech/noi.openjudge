#include <cstdio>
int main(){
	double r,b,c,d,pi;
	scanf("%lf",&r);
	pi=3.14159;
	b=2*r;
	c=2*pi*r;
	d=pi*r*r;
	printf("%.4lf ",b);
	printf("%.4lf ",c);
	printf("%.4lf ",d);
	return 0;
	}