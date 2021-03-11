#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
    int n ,i ,num[500];
    fill(num,num+500,0);
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>num[i];
        if(num[i]%2==0)num[i]=0;
    }
    stable_sort(num,num+n);
    for ( i = 0; i < n-1; i++)
    {
        if (num[i]!=0)cout << num[i] << ",";
    }
    cout << num[n-1] << endl;
    system("pause");
    return EXIT_SUCCESS;
}