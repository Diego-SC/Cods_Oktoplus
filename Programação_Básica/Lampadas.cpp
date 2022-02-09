#include <iostream>

using namespace std;

int main(){
    int n, a = 0, b = 0, inter;

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> inter;

        if(inter == 1){
            if(a == 0){
                a = 1;
            }
            else{
                a = 0;
            }
        }
        if(inter == 2){
            if(a == 0 and b == 0){
                a = 1;
                b = 1;
            }
            else if(a == 1 and b == 1){
                a = 0;
                b = 0;
            }
            else if(a == 0 and b == 1){
                a = 1;
                b = 0;
            }
            else{
                a = 0;
                b = 1;
            }

        }
    }
    cout << a << endl;
    cout << b << endl;
}