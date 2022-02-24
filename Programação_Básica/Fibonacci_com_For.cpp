#include <iostream>

using namespace std;

int main(){
	
	int n, x = 1, y = 1, result = 0;

	cin >> n;
	
    for(int i = 2; i < (n+1); i++){                                        
    	result = x + y;                    
    	
        x = y;                           
    	y = result;                           
    }      
	
	cout << y << endl;
}