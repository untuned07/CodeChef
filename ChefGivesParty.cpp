// Codechef Problem: https://www.codechef.com/problems/PARTY2


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, n, x, k;
	cin >>t;
	for (i = 1; i <= t; i++){
	    cin >>n >>x >>k;
	    if (k >= n*x){cout <<"YES" <<endl;}
	    else {cout<<"NO" <<endl;}
	}
	return 0;
}
