#include <cstdio>
int main(){
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	switch(c){
		case'+':printf("%d",a+b);;break;
		case'-':printf("%d",a-b);;break;
		case'*':printf("%d",a*b);;break;
		case'/':if(b==0){
			printf("Divided by zero!");}
			else{
			printf("%d",a/b);};break;
		default:printf("Invalid operator!");
	}
	return 0;
}