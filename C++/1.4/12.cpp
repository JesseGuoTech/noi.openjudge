#include <cstdio>
int main (){
	int a,b,c;
	scanf("%d",&a);
	b=a/1.2;
	c=(a/3)+23+27;
	if(b>c)
	printf("Bike");
	if(b<c)
	printf("Walk");
	if(b==c)
	printf("All");
	return 0;
	}