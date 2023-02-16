// Codechef Problem: https://www.codechef.com/problems/DEVSPORTS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, z, y, a, b, c;
	cin >>t;
	while(t--){
	    cin >>z >>y >>a >>b >>c;
	    if((z - y) >= (a + b + c)){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
