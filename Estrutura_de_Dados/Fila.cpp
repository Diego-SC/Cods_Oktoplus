#include <iostream>

using namespace std;

int main(){
    int n, m, pega;

    cin >> n;
    int fila[n];
    for(int i = 0; i < n; i++){
        cin >> fila[i];
    }
    
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> pega;

        for(int j = 0; j < n; j++){
            if(fila[j] == pega){
                fila[j] = 0;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << fila[i] << " ";
    }
    cout << endl;
}