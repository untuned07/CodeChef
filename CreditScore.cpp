// Codechef Problem: https://www.codechef.com/problems/CREDSCORE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin >>x;
	if(0<= x && x <= 1000){
	    
    	if (x >= 750){
	        cout <<"YES" <<endl;
    	}else{
	        cout <<"NO" <<endl;
    	}
	}
	return 0;
}
