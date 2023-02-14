// Codechef Problem: https://www.codechef.com/problems/CHESSDIST


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, d;
	cin >>t;
	while (t--){
	    cin >>a >>b >>c >>d;
	    int result = max(abs(a-c), abs(b-d));
	    cout <<result <<endl;
	}
	return 0;
}
