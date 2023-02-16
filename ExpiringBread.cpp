// Codechef Problem: https://www.codechef.com/problems/EXPIRY


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, m, k;
	cin >>t;
	while(t--){
	    cin >>n >>m >>k;
	    if ((k * m) >= n){
	        cout <<"YES" <<endl;
	    }else {
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
