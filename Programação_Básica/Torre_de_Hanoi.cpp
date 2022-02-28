#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    vector<int> ent;

    for(int t = 0; t > -1; t++){
        int n = 0, result = 0; //n: é o n° de peças

        cin >> n;

        if(n == 0){
            break;
        }

        result = pow(2, n) - 1;

        ent.push_back(result);
    }

    for(int i = 0; i < (int)ent.size(); i++){
        cout << "Teste " << i+1 << endl;
        cout << ent[i] << endl;
        cout << endl;
    }
}