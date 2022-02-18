#include <iostream>

using namespace std;

int main(){
    string risada, natural, inversa;

    cin >> risada;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i'){
            natural += risada[i];
        }
        if(risada[i] == 'o' or risada[i] == 'u'){
            natural += risada[i];
        }
    }

    for(int i = risada.size()-1; i >= 0; i--){
        if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i'){
            inversa += risada[i];
        }
        if(risada[i] == 'o' or risada[i] == 'u'){
            inversa += risada[i];
        }
    }
    
    if(natural == inversa){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }
}