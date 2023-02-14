// Codechef Problem: https://www.codechef.com/problems/CHEFAPPS

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t, s, x, y, z;
	cin >>t;
	while (t--){
	    cin >>s >>x >>y >>z;
	    int rem = s - (x + y);
	    if (z <= rem){
	        cout <<"0" <<endl;
	    }else if(z <= (rem + max(x, y))){
	        cout <<"1" <<endl;
	    }else{
	        cout <<"2" <<endl;
	    }
	}
	return 0;
}
