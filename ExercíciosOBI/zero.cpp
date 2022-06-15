#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cont = 0, soma = 0;

    cin >> n;
    int nums[n];

    for(int i = (n-1); i >= 0; i--)
        cin >> nums[i];

    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            cont++;
        }
        else if(nums[i] != 0 and cont > 0){
            cont--;
        }
        else if(nums[i] != 0 and cont == 0){
            soma+= nums[i];
        }
    }
    cout << soma << endl;

    return 0;
}