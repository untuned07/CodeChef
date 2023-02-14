// Codechef Problem: https://www.codechef.com/problems/CHEFRACES

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, a, b;
	cin >>t;
	while (t--){
	    cin >>x >>y >>a >>b;
	    if(x != a && x != b){
	        if (y != a && y != b){
	            cout <<"2" <<endl;
	        }else{
	            cout <<"1" <<endl;
	        }
	    }else{
	        if(y != a && y != b){
	            cout <<"1" <<endl;
	        }else{
	            cout <<"0" <<endl;
	        }
	    }
	}
	return 0;
}
