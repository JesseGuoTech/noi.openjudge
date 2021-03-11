#include <cstdio>
int main (){
	int a,flag;
	scanf("%d",&a);
	(a%4==0&&a%100!=0||a%400==0)?printf("Y"):printf("N");
	return 0;
}