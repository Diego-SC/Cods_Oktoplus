#include <iostream>

using namespace std;

int main(){
    int n, quadrado[12][12];
    int Lin[12], Colun[12], verific = 0, valorS = 0, entrada = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quadrado[i][j];
            
            if(i == 0){
                verific += quadrado[i][j];
            }

            Lin[i] = 0;
            Colun[i] = 0;
        }
    }

    //Verificação das linhas
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            Lin[i] += quadrado[i][j];
        }
        if(Lin[i] != verific){
            entrada = 1;
        }
        else{
            entrada = 0;
        }
    }
     
    //Verificação das colunas
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            Colun[i] += quadrado[j][i];
        }
        if(Colun[i] != verific){
            entrada = 1;
        }
        else if(entrada != 1){
            entrada = 0;
        }
    }
    
    //Verificação das diagonais (esquerda para a direita)
    for(int i = 0; i < n; i++){
        valorS += quadrado[i][i];
    }
    if(valorS != verific){
        entrada = 1;
    }
    else if(entrada != 1){
        entrada = 0;
    }
    
    valorS = 0;
    
    //Verificação das diagonais (direita para a esquerda)
    for(int i = 0; i < n; i++){
        for(int j = (n-1); j >= 0; j--){
            if(j == (n-1) - i){
                valorS += quadrado[i][j];
            }
        }
        if(valorS != verific and i == (n-1)){
            entrada = 1;
        }
        else if(entrada != 1 and i == (n-1)){
            entrada = 0;
        }
    }
    
    
    //Descobrindo se é ou não um Quadrado Mágico
    if(entrada == 0){
        cout << verific << endl;
    }
    else if(entrada == 1){
        cout << -1 << endl;
    }
}
