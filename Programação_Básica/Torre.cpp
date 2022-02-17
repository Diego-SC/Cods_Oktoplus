#include <iostream>

using namespace std;

int main(){
    int n, maiorP = 0, somaP = 0;

    cin >> n;

    int tab[n][n], Lin[n], Colun[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> tab[i][j];
        }
        Lin[i] = 0;
        Colun[i] = 0;
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            Colun[i] += tab[j][i];
            Lin[i] += tab[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaP = (Lin[i] + Colun[j]) - 2 * tab[i][j];

            if(somaP > maiorP){
                maiorP = somaP;
            }
        }
    }

    cout << maiorP << endl;
}