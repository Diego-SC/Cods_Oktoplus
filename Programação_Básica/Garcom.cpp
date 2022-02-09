#include <iostream>

using namespace std;

int main(){
    int n, c, l;
    int total = 0 , i = 0;// total e i que serve para parar o while

    cin >> n; 

    while(i < n){
        cin >> l >> c;

        if(l > c){
            total = total + c;
        }

        i++;
    }

    cout << total << endl;
}