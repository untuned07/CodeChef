// Codechef Problem: https://www.codechef.com/problems/CABS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, y;
	cin>>t;
	for(i=1; i<=t; i++){
	    cin >>x >>y;
	    if (x<y){cout <<"FIRST" <<endl;}
	    else if (x == y) {cout <<"ANY" <<endl;}
	    else {cout <<"SECOND" <<endl;}
	}
	return 0;
}
