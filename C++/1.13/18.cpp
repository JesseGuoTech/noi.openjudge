#include <iostream>
using namespace std;
bool leap(short year){
    if (year % 4 == 0){//除4，初步判断
    if (year % 400 == 0 )return true;
    else if (year % 100 == 0) return false;
        else return true;
    }
    else return false;
}
int main (int argc, char *argv[]){
    short y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ){//1.3.5.7.8.10
        if (d == 31){m++; d = 1;}
        else d++;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11){//4.6.9.11
        if (d == 30){m++; d = 1;}
        else d++;
    }
    if (m == 2){
        switch (d)
        {
        case 29: m++; d = 1; break;
        case 28:
        if(leap(m))d++;
        else {d = 1; m++;}
            break;
        default: d++;break;
        }
    }
    if (m == 12){
        if (d == 31){y++; m = 1; d = 1;}
        else d++;
    }
    cout << y << "-" << m << "-" << d << endl;
    exit (0);
}