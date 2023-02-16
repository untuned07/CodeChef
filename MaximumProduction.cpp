// Codechef Problem: https://www.codechef.com/problems/EITA


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, d, x, y, z;
	cin >>t;
	while(t--){
	    cin >>d >>x >>y >>z;
	    int wd= (d * y) + (( 7 - d ) * z);
	    if(7 *x > wd){cout << 7 * x <<endl;}
	    else{cout <<wd <<endl;}
	}
	return 0;
}
