// Codechef Problem: https://www.codechef.com/problems/CHEFTRANS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, z;
	cin >>t;
	while (t--){
	    cin >>x >>y >>z;
	    if(z == x + y){
	        cout <<"EQUAL" <<endl;
	    }else if (z < x + y){
	        cout <<"TRAIN" <<endl;
	    }else{
	        cout <<"PLANEBUS" <<endl;
	    }
	}
	return 0;
}
