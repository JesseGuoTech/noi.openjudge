#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int a,i;
	double b,c;
	cin>>a;
	for(i=0;i<a;i++){
		cin>>b;
		c=c+b;
	}
	c=(c/a);
	printf("%.2lf",c);
	return 0;
}