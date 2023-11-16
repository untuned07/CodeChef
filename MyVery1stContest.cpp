// Codechef Problem: https://www.codechef.com/problems/MY1STCONTEST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, a, b;
	cin >>n >>a >>b;
	if (2<=n && 1<=a && 1<=b && (a+b) <= n){
	    cout <<n-a <<" " <<n-a-b <<endl;
	}
	return 0;
}
