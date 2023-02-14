// Codechef Problem: https://www.codechef.com/problems/CHEFCHOCO

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,c,x,y;
	cin >>t;
	while (t--){
	    cin >>c >>x >>y;
	    cout <<((c-x) *y) <<endl;
	}
	return 0;
}
