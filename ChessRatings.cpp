// Codechef Problem: https://www.codechef.com/problems/C_RATING


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while (t--){
	    cin >>x >>y;
	    if (y <= x){
	        cout <<0 <<endl;
	    }else{
	        int v = (y - x) / 8;
	        if((v *8) + x == y){
	            cout <<v <<endl;
	        }else{
	            cout <<v + 1 <<endl;
	        }
	        
	    }
	}
	return 0;
}
