#include <iostream>
#include <cmath>
using namespace std;
int transform(int num, int times){
    int n;
    if (num / 10 != 0){
        times++;
        return ((num % 10) * pow(8, times - 1)) + transform(num / 10, times);
    }
    else return ((num % 10) * pow(8, times));
}
int main (int argc, char *argv[]){
    int num;
    cin >> num;
    cout << transform(num, 0) << endl;
    exit (0);
}