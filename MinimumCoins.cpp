// Codechef Problem: https://www.codechef.com/problems/MINCOINSREQ

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, i, n;
	cin >>t;
	for (i= 1; i<=t; i++){
	    cin >>n;
	    cout <<n%10 <<endl;
	}
	return 0;
}
