#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(){
	char str[256]="/0";int x=0, i = 0;
	gets(str);
	while (str[i] != 0){
		if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0')x++;
		i++;
	}
	cout << x <<endl;
	return 0;
}