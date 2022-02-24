#include <iostream>

using namespace std;

int fibonacci(int i, int n, int x, int y, int result){
    if(i == (n-1)){
        return y;
    }

    result = x + y;

    x = y;
    y = result;

    return fibonacci(i+1, n, x, y, result);
}

int main(){
    int n, i = 0, x = 1, y = 1, result = 0;

    cin >> n;

    cout << fibonacci(i, n, x, y, result) << endl;;
}