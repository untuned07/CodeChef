// Codechef Problem: https://www.codechef.com/problems/FINDSHOES


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, m;
	cin >>t;
	while (t--){
	    cin >>n >>m;
	    if (m >= n){
	        cout <<n <<endl;
	    }else{
	        cout <<n + (n - m) <<endl;
	    }
	}
	return 0;
}
