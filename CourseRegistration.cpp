// Codechef Problem: https://www.codechef.com/problems/COURSEREG


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, m, k;
	cin >>t;
	while (t--){
	    cin >>n >>m >>k;
	    if((m-k)>=n){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
