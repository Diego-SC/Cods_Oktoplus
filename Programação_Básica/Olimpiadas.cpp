#include <iostream>
#include <algorithm>

using namespace std;

struct part{
    int o = 0, p = 0, b = 0, id;
};

int ordem(part x, part y){
    if(x.o != y.o){
        return x.o > y.o;
    }
    if(x.p != y.p){
        return x.p > y.p;
    }
    if(x.b != y.b){
        return x.b > y.b;
    }
    return x.id < y.id;
}

int main(){
    int n, m;
    int ouro, prata, bronze;

    cin >> n >> m;
    part pais[n];

    for(int i = 0; i < n; i++){
        pais[i].id = i+1;
    }

    for(int i = 0; i < m; i++){
        cin >> ouro >> prata >> bronze;

        pais[ouro-1].o++;
        pais[prata-1].p++;
        pais[bronze-1].b++;
    }

    sort(pais, pais+n, ordem);

    for(int i = 0; i < n; i++){
        cout << pais[i].id << " ";
    }
    cout << endl;
}