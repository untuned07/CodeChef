// Codechef Problem: https://www.codechef.com/problems/SUBSCRIBE_

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >>t;
	while (t--){
	    cin >>n >>x;
	    if (n %6 == 0){
	        cout <<(n/6) * x <<endl;
	    }else if (n % 6 != 0){
	        n = (n/6) + 1;
	        cout <<n *x <<endl;
	    }
	}
	return 0;
}
