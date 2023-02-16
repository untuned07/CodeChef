// Codechef Problem: https://www.codechef.com/problems/JCOINS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while (t--){
	    cin >>x >>y;
	    cout << 10 * x + 5 * y <<endl;
	}
	return 0;
}
