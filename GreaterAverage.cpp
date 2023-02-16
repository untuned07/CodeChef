// Codechef Problem: https://www.codechef.com/problems/AVGPROBLEM


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    float a, b, c;
	    cin >>a >>b >>c;
	    float avg = (a + b) / 2;
	    if(avg >c){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
