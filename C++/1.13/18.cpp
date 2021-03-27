#include <iostream>
using namespace std;
bool leap(int year){
    if((year % 4 == 0 && year % 100 != 0) || year %400 == 0)return true;
    else return false;
}
void output(int y, int m, int d){ cout << y << "-";
    if(m < 10)cout << "0" << m << "-";
    else cout << m << "-";
    if (d < 10)cout << "0" << d << endl;
    else cout << d << endl;
    exit (0);
    }

int main (int argc, char *argv[]){
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (m == 2){
        switch (d)
        {
        case 29: m++; d = 1; break;
        case 28:
        if(leap(y))d++;
        else {d = 1; m++;}
            break;
        default: d++;break;
        }
        output(y, m, d);
    }
    if (m == 12){
        if (d == 31){y++; m = 1; d = 1;}
        else d++;
        output(y, m, d);
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ){//1.3.5.7.8.10
        if (d == 31){m++; d = 1;}
        else d++;
        output(y, m, d);
    }
    if (m == 4 || m == 6 || m == 9 || m == 11){//4.6.9.11
        if (d == 30){m++; d = 1;}
        else d++;
        output(y, m, d);
    }
}