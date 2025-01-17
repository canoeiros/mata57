#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
using namespace std;


struct pessoa{
    string nome;
    int peso;
};

int main(){
    int v;
    cin >> v;


    vector<pessoa> pessoas;
    pessoa aux;

    int soma = 0;
    for(int i = 0; i < v; i++){
        cin >> aux.nome >> aux.peso;
        pessoas.push_back(aux);
        soma += aux.peso;
    }
    int cap;
    cin >> cap;

    if(soma <= cap){
        cout << "Vamos todos encontrar a montanha!"<< endl;
    }
    else{
        cout << "Vamos virar almoço de aranhas gigantes!"<< endl;

    }
}