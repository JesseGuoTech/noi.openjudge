#include <iostream>
#include <cstdlib>
using namespace std;
void judge(long long num, long long factor, bool first) {
    long long i = 0;
    while (num % factor == 0) { num /= factor; i++; }
    if (first) {
        switch (i)
        {
        case 0: break;
        case 1: cout << factor; first = false; break;
        default: cout << factor << "^" << i; first = false; break;
        }
    }
    else {
        switch (i)
        {
        case 0: first = false; break;
        case 1: cout << "*" << factor; break;
        default: cout << "*" << factor << "^" << i; break;
        }
    }
    if (num == 1) exit(0);
    else judge(num, factor + 1, first);
}
int main() {
    long long num;
    cin >> num;
    judge(num, 2, true);
    system("pause");
    exit(0);
}