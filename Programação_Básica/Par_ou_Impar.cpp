#include <iostream>

using namespace std;

int main(){
    int b = 0, c = 0;

    cin >> b;
    cin >> c;

    if((b+c)%2 == 0){
        cout << "Bino" << endl;
    }
    else{
        cout << "Cino" << endl;
    }
}