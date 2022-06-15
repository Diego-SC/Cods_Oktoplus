#include <bits/stdc++.h>

using namespace std;

int main(){
    int irmas[3], maior = 0, menor = 101, Camila;

    cin >> irmas[0];
    cin >> irmas[1];
    cin >> irmas[2];
    
    sort(irmas, irmas+3);

    cout << irmas[1] << endl;

    return 0;
}