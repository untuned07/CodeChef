// Codechef Problem: https://www.codechef.com/problems/SIXFRIENDS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, y;
	cin >>t;
	for (i = 1; i<=t; i++){
	    cin >>x >>y;
	    if (3*x > 2*y){cout <<2*y <<endl;}
	    else {cout <<3*x <<endl;}
	}
	return 0;
}
