#include <iostream>

using namespace std;

int main(){
    int n, total = 0;
    string gab, gab_cand;

    cin >> n;
    cin >> gab;
    cin >> gab_cand;

    for(int i = 0; i < n; i++){
        if(gab[i] == gab_cand[i]){
            total++;
        }
    }

    cout << total << endl;
}