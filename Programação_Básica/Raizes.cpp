#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    double raiz;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> raiz;

        cout.precision(4);
        cout.setf(ios::fixed);

        cout << sqrt(raiz) << endl;
    }
}