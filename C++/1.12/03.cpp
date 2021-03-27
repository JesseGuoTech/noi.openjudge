#include <iostream>
#include <cstring>
using namespace std;
bool judge(float temperature, bool cough){
    if(temperature >= 37.5 && cough)return true;
    else return false;
}
int main (){
    int i, j = 0, n;
    string name;
    float temperature;
    bool cough;
    cin >> n;
    for (i =0; i < n; i++){
        cin >> name >> temperature >> cough;
        if(judge(temperature, cough)){cout << name << endl;j++;}
    }
    cout << j;
    exit(0);
}