#include <iostream>

using namespace std;

int main(){
    int n, p, q, result;
    char c;

    cin >> n;
    cin >> p >> c >> q;

    if(c == '+'){
        result = p + q;
    }
    else{
        result = p * q;
    }

    if(result > n){
        cout << "OVERFLOW" << endl;
    }
    else{
        cout << "OK" << endl;
    }
}