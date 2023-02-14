// Codechef Problem: https://www.codechef.com/problems/TYRES

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    if(n % 4 ==0){
	        cout <<"NO" <<endl;
	    }else{
	        cout <<"YES" <<endl;
	    }
	}
	return 0;
}
