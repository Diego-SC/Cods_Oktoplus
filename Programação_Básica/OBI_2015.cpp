#include <iostream>

using namespace std;

int main(){
    int n, vetor[10002], result = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++){
        if(i <= n-3){
            if(vetor[i] == 1 and vetor[i+1] == 0 and vetor[i+2] == 0){
                result++;
            }
        }
    }

    cout << result << endl;
}