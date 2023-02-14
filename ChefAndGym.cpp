// Codechef Problem: https://www.codechef.com/problems/CGYM

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, z;
	cin >>t;
	while(t--){
	    cin >>x >>y >>z;
	    if (x > z){
	        cout <<"0" <<endl;
	    }else if (x + y <= z){
	        cout <<"2" <<endl;
	    }else{
	        cout <<"1" <<endl;
	    }
	}
	return 0;
}
