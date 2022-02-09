#include <iostream>

using namespace std;

int main(){
    int n, val = 0, ant = 0, pega = 1, pontos = 0, t = 0;

    cin >> n;

    for(int i = 0; i< n; i++){
        cin >> val;

        if(val == ant){
            pega++;
            t = 1;
        }
        if(val != ant and t == 1){
            pega = 1;
        }
        if(pega > pontos and t == 1){
                pontos = pega;
        }

        ant = val;
    }

    cout << pontos << endl;
}