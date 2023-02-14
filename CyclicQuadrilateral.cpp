// Codechef Problem: https://www.codechef.com/problems/CYCLICQD


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, d;
	cin >>t;
	while(t--){
	    cin >>a >>b >>c >>d;
	    if (a + c == 180 && b + d == 180){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
