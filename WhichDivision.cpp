// Codechef Problem: https://www.codechef.com/problems/WHICHDIV


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, r;
	cin >>t;
	while(t--){
	    cin >>r;
	    if (r < 1600){cout <<3 <<endl;}
	    else if(1600 <= r && r < 2000){cout <<2 <<endl;}
	    else if(2000 <= r){cout <<1 <<endl;}
	}
	return 0;
}
