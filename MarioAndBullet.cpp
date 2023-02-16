// Codechef Problem: https://www.codechef.com/problems/BULLET


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, z;
	cin >>t; 
	while (t--){
	    cin >>x >>y >>z;
	    int rem = y / x;
	    if (rem > z){cout <<"0" <<endl;}
	    else{
	        cout <<z - rem <<endl;
	    }
	}
	return 0;
}
