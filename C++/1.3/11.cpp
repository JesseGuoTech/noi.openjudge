#include<cstdio>
#include<iostream>
using namespace std;
main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	printf("%g\n",a-(b*(int(a/b))));
	system("pause");
	return EXIT_SUCCESS;
}