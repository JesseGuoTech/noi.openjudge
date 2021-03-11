#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int num[5][5], m, n, i, j;
	memset(num, 0, sizeof(num));
	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 5; ++j)cin >> num[i][j];
	}
	cin >> m >> n;
	for (i = 0; i < 5; ++i)swap(num[m-1][i], num[n-1][i]);
	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 5; ++j)cout << num[i][j] << " ";
		cout << endl;
	}
}