#include <iostream>
#include <vector>

using namespace std;

int main(){
    string n;
    int v;

    getline(cin, n);

    if((n.back() - 12) % 2 == 0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    for(int i = 0; i < n.size(); i++){
        v+= n[i];
    }
    if(v%3 == 0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    if(n.back() == '0' or n.back() == '5'){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }
}