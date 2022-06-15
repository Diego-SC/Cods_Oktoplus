#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, m;

    cin >> n;
    int pedidos[n], quant[2] = {0};

    for(int i = 0; i < n; i++){
        cin >> pedidos[i];
        quant[pedidos[i]-1]++;
    }
    cin >> p;
    cin >> m;

    if(p == quant[0] and m == quant[1])
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}