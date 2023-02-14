// Codechef Problem: https://www.codechef.com/problems/HELIUM3


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, x, y;
	cin >>t;
	while (t--){
	    cin >>a >>b >>x >>y;
	    if (x * y >= a *b){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
