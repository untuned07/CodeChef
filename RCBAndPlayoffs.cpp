// Codechef Problem: https://www.codechef.com/problems/RCBPLAY


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, z;
	cin >>t;
	while(t--){
	    cin >>x >>y >>z;
	    if(x + z *2 >= y){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
