// Codechef Problem: https://www.codechef.com/problems/INSURANCE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x, y;
	cin >>t;
	while (t--){
	    cin >>x >>y;
	    if (y <=x){
	        cout <<y <<endl;
	    }else{
	        cout <<x <<endl;
	    }
	}
	return 0;
}
