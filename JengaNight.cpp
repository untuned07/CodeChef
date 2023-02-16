// Codechef Problem: https://www.codechef.com/problems/JENGA

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >>t;
	while(t--){
	    cin >>n >>x;
	    if (x % n == 0){
	        cout <<"YES" <<endl;
	    }else {
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
