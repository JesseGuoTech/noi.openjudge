#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
	int n, x, i, num[10000];
	memset(num,0,sizeof(num));
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	cin>>x;
	for(i=0;i<n;i++){
		if(x==num[i]){
			cout<<i+1<<endl;
			system ("pause");
			return 0;
		}
	}
	cout<<"-1"<<endl;
	return 0;

}