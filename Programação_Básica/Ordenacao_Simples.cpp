#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int seq[n];

    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }

    sort(seq, seq+n);

    for(int t = 0; t < n; t++){
        cout << seq[t] << " ";
    }
}