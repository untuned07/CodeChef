// Codechef Problem: https://www.codechef.com/problems/PASSORFAIL


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x, p;
	cin >>t;
	while(t--){
	    cin >>n >>x >>p;
	    int score = x *3 - (n - x);
	    if (score >= p){
	        cout <<"PASS" <<endl;
	    }else{
	        cout <<"FAIL" <<endl;
	    }
	}
	return 0;
}
