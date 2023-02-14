// Codechef Problem: https://www.codechef.com/problems/CREDCOINS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while (t--){
	    cin >>x >>y;
	    cout << (x * y)/100 <<endl;
	}
	return 0;
}
