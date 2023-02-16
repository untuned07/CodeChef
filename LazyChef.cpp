// Codechef Problem: https://www.codechef.com/problems/LAZYCHF


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, m, d;
	cin>>t;
	while(t--){
	    cin >>x >>m >>d;
	    cout <<min(x * m, x + d) <<endl;
	}
	return 0;
}
