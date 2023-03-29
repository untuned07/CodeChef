// Codechef Problem: https://www.codechef.com/problems/FAIRPASS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	cin >>t;
	while (t--){
	    cin >>n >>k;
	    if (n + 1 <= k){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
