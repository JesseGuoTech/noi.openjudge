#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main (){
    int i;
    char str[500];
    memset(str, '\000', sizeof(str));
    gets(str);
    for (i =499; i>=0; i--){cout << str[i];}
    return EXIT_SUCCESS;
}
