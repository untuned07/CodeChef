// Codechef Problem: https://www.codechef.com/problems/GRIDBL

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, m, t;
	cin >>t;
	while(t--){
	    cin >>n >>m;
	    cout << n * m - 4 * (n/2) * (m/2) <<endl;
	   // int size = n * m;
	   // cout << size %4 <<endl;
	}
	return 0;
}
