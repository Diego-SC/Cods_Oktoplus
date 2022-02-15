#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, fita[10002], a = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> fita[i];
    }

    for (int i = 0; i < n; i++){
        if (fita[i] == -1){
            fita[i] = 9;
        }
    }

    for (int i = 0; i < n; i ++){
        if (fita[i] == 0){
            for (int j = 0; j < n; j++){
                a = abs(j - i);
                if (a < fita[j]){
                    fita[j] = a;
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << fita[i] << " ";
    }
}