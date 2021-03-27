#include <iostream>
#include <cstring>
using namespace std;
int main (int argc, char**argv){
    string str[100];
    int i = 0, j = 0;
    do{cin >> str[i];i++;}
    while(getchar() == ' ');
    for(j = i-1; j >= 0; j--){
        cout << str[j] << " ";}
    cout << endl;
    return 0;
}
