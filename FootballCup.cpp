// Codechef Problem: https://www.codechef.com/problems/FOOTCUP

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while (t-- != 0){
	    cin >>x >>y;
	    if (x != y){
	        cout <<"NO" <<endl;
	    }else{
	        if (x > 0){
	            cout <<"YES" <<endl;
	        }else{
	            cout <<"NO" <<endl;
	        }
	    }
	}
	return 0;
}
