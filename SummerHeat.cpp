// Codechef Problem: https://www.codechef.com/problems/COCONUT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, d;
	cin >>t;
	while(t--){
	    cin >>a >>b >>c >>d;
	    cout <<(c / a) + (d / b) <<endl;
	}
	return 0;
}
