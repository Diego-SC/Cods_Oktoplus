#include <iostream>

using namespace std;

int main(){
    int p, r;

    cin >> p >> r;

    if(p == 1 and r == 1){cout << "A\n";}
    else if(p == 1 and r == 0){cout << "B\n";}
    else{cout << "C\n";}
}