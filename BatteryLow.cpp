// Codechef Problem: https://www.codechef.com/problems/BATTERYLOW


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, t;
	cin >>t;
	while(t--){
	    
	cin >>x;
	if (x <=15){
	    cout <<"YES" <<endl;
	}else{
	    cout <<"NO" <<endl;
	}
	}
	return 0;
}
