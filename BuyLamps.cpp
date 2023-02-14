// COdechef Problem: https://www.codechef.com/problems/BUYLAMP


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, t, k, x, y;
	cin >>t;
	while (t--){
	    cin >>n >>k >>x >>y;
	    int rem = n - k;
	    if (x <= y){
	        rem = rem * x;
	    }else{
	        rem = rem * y;
	    }
	    cout <<(k * x)+ rem <<endl;
	}
	return 0;
}
