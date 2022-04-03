#include <iostream>

using namespace std;

int main(){
    int v, s[] = {100, 50, 25, 10, 5, 1};
    int total = 0, t = 0;

    cin >> v;

    for(int i = 0; i < 6; i++){
        while(t == 0){
            if(v >= s[i]){
                v -= s[i];
                total++;
            }
            else{
                break;
            }
        }
    }
    cout << total << endl;
}