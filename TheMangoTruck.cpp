// Codechef Problem: https://www.codechef.com/problems/MANGOES


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y,z;
	cin >>t;
	while(t--){
	    cin >>x >>y >>z;
	    cout <<((z-y)/x) <<endl;
	}
	return 0;
}
