#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, ordI[100002], x = 0, quant = 0;
    cin >> n;
    
    int ordF[n], pegos[n];

    for(int i = 0; i < n; i++){
        cin >> ordI[i];
        ordF[i] = ordI[i];
    }

    sort(ordF, ordF+n);

        for(int i = 0; i < n; i++){
            if(ordF[i] != ordI[i]){
                quant++;
                
                pegos[x] = ordI[i];
                x++;
            }
        }

    cout << quant << endl;

    sort(pegos, pegos+x);

    for(int i = 0; i < x; i++){
        cout << pegos[i] << " ";
    }
}