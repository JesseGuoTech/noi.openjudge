#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
	int N, m, ans=0, i, num[100];
	cin >> N;
	memset(num, 0, sizeof(num));
	for ( i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	cin >> m;
	for ( i = 0; i < N; i++)
	{
		if (num[i]==m)
		{
			ans++;
		}
	}
	cout << ans << endl;
	system("pause");
	return EXIT_SUCCESS;
}