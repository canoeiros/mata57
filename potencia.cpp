#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
using namespace std;

int pot(int b, int e){
    int mem = b;
    if (e == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < e; i++)
        {
            mem = mem * b;        
        }
        return mem;
        
    }
}

int main(){
    int x, e;
    cin >> x >> e;
    cout << pot(x,e) <<endl;
}