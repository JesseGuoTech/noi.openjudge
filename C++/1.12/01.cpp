#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;

class calculate
{
private:
public:
    int plus (int x ,int y){
    return x + y;
    }
    int minus (int x, int y){
        return x - y;
    }
    int multiply(int x, int y){
        return x * y;
    }
    int divide (int x, int y){
        return x / y;
    }
    int surplus (int x, int y){
        return x % y;
}
};

int process(char ch, int a, int b){
    calculate calc;
    int ans;
    switch (ch){
        case '+':ans = calc.plus(a, b);break;
        case '-':ans = calc.minus(a, b);break;
        case '*':ans = calc.multiply(a, b);break;
        case '/':ans = calc.divide(a, b);break;
        case '%':ans = calc.surplus(a, b);break;
    }
    return ans;
}

int main (){
    int x, y;
    char ch;
    cin >> x >> ch >> y;
    cout << process(ch, x, y) << endl;
    system("pause");
    exit (0);
}