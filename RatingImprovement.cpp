// Codechef Problem: https://www.codechef.com/problems/ADVANCE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, y;
	cin >>t;
	for (i=1; i<=t; i++){
	    cin >>x >>y;
	    if(y >= x && y <= x+200){cout<<"YES" <<endl;}
	    else{cout<<"NO" <<endl;}
	}
	return 0;
}
