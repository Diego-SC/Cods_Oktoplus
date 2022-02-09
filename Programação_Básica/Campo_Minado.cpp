#include <iostream>

using namespace std;

int main(){
    int n, tab[52], result;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }

    for(int i = 0; i < n; i++){
        
        result = 0;
        
        result = result + tab[i];
        
        if(i > 0){
            result = result + tab[i-1];
        }
        if(i < n-1){
            result = result + tab[i+1];
        }

        cout << result << endl;
    }
}