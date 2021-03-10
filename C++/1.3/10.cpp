#include<cstdio>
#include<iostream>
using namespace std;
main(){
	float r1,r2,R;
	scanf("%f %f",&r1,&r2);
	R = 1/(1/r1 + 1/r2);
	printf("%.2f\n",R);
	system("pause");
	return EXIT_SUCCESS;
}