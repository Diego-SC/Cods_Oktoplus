#include <iostream>

using namespace std;

int main(){
    char letra;
    double x, y, result;

    cin >> letra;
    cin >> x >> y;

    if(letra == 'M'){
        result = x * y;
    }
    else{
        result = x / y;
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << result << endl;
}