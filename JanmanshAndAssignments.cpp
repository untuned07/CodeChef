// Codechef Problem: https://www.codechef.com/problems/JASSIGNMENTS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >>t;
	while (t--){
	    cin >>x;
	    if ( x + 3 <= 10){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
