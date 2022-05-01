#include <iostream>
#include <string>

using namespace std;

int main(){
    string n, temp = "0", ultd;
    int dult = 0, soma = 0;

    cin >> n;

    if(n.size() < 2){
        temp = n[n.size() - 1];
    }
    else{
        temp = "";
        temp = n[n.size() - 2];
        temp = temp + n[n.size() - 1];
    }

    dult = stoi(temp);

    if(dult % 4 == 0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    for(int i = 0; i < n.size(); i++){
        temp = n[i];
        soma += stoi(temp);
    }
    if(soma % 9 == 0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    if(dult % 25 == 0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    return 0;
}