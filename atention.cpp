#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
using namespace std;

void calcEsfera(float *area, float raio, float *volume){
    *area = 4.0 * 3.14 * raio * raio;
    *volume = (raio * raio * raio * 3.14) * (4.0/3);
}

int main(){
    float area, volume, raio;
    cin >> raio;
    calcEsfera(&area, raio, &volume);
    cout.precision(5);
    cout << area << endl;
    cout << volume << endl;
}