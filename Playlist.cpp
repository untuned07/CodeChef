// https://www.codechef.com/problems/SONGS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >>t;
	while (t--){
	    cin >>n >>x;
	    cout <<n/ (3 *x) <<endl;
	}
	return 0;
}
