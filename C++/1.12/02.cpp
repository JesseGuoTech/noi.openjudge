#include <iostream>
using namespace std;
int multi(int len){
    int k = len / 70;
    switch (len % 70)
    {
    case 0:
        break;
    default:
        k++;
        break;
    }
    return k;
}
int main(){
    int n, i, j, num = 0;
    cin >> n;
    for (i =0; i < n; i++){
        cin >> j;
        num += multi(j);
    }
    cout << num * 0.1 << endl;
    return 0;
}