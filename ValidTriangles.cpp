// Codechef Problem: https://www.codechef.com/problems/FLOW013

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c;
	cin >>t;
	while(t--){
	    cin >>a >>b >>c;
	    if (a + b + c == 180){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
