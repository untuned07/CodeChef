// Codechef Problem: https://www.codechef.com/problems/CRICUP


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, d;
	cin >>t;
	while(t--){
	    cin >>x >>y >>d;
	    if(abs(x-y) <= d){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
