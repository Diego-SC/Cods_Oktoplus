#include <iostream>
#include <cctype>

using namespace std;

string title(string F){
    string Verd_F;
    char f[F.size()];

    for(int i = 0; i < F.size(); i++){
        f[i] = ' ';
    }
    
    for(int i = 0; i < F.size(); i++){
        f[i] = F[i];
    }

    for(int t = 0; t < F.size(); t++){
        if(t == 0 and (int)f[t] >= 97 and (int)f[t] <= 122){
            f[t] = toupper(f[t]);
        }

        if(t > 0 and (int)f[t] >= 97 and (int)f[t] <= 122 and (int)f[t-1] == 32){
            f[t] = toupper(f[t]);
        }

        if(t > 0 and (int)f[t] >= 65 and (int)f[t] <= 90 and (int)f[t-1] != 32){
            f[t] = tolower(f[t]);
        }
    }

    for(int i = 0; i < F.size(); i++){
        Verd_F += f[i];
    }
    
    return Verd_F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}