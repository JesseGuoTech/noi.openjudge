#include <cstdio>
int main(){
	long a,b;
	scanf("%ld %ld",&a,&b);
	if(a>b)
	printf(">");
	if(a<b)
	printf("<");
	if(a==b)
	printf("=");
	return 0;
	}