#include <iostream>

using namespace std;

int main(){
    int n, a;
    int i = 0, soma = 0, total_de_dias = 0, verifica = 0;

    cin >> n;

    while(i < n){
        cin >> a;
        soma = soma + a;

        if(soma >= 1000000 and verifica == 0){
            total_de_dias = i+1;
            verifica = 1;
        }

        i++;
    }

    cout << total_de_dias << endl;
}