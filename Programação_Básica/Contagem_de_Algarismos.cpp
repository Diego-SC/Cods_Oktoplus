#include <iostream>

using namespace std;

int main(){
    int n, num[10];

    cin >> n;

    string quant[n], valor;

    for(int i = 0; i < n; i++){
        cin >> quant[i];
    }
    for(int i = 0; i < 10; i++){
        num[i] = 0;
    }

    for(int i = 0; i < n; i++){
        valor = quant[i];
        
        for(int j = 0; j < valor.size(); j++){
            if(valor[j] == '0'){
                num[0]++;
            }
            if(valor[j] == '1'){
                num[1]++;
            }
            if(valor[j] == '2'){
                num[2]++;
            }
            if(valor[j] == '3'){
                num[3]++;
            }
            if(valor[j] == '4'){
                num[4]++;
            }
            if(valor[j] == '5'){
                num[5]++;
            }
            if(valor[j] == '6'){
                num[6]++;
            }
            if(valor[j] == '7'){
                num[7]++;
            }
            if(valor[j] == '8'){
                num[8]++;
            }
            if(valor[j] == '9'){
                num[9]++;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout << i << " - " << num[i] << endl;
    }
}