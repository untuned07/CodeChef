// Codechef Problem: https://www.codechef.com/problems/QUALIFY

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, a, b;
	cin >>t;
	while(t--){
	    cin >>x >>a >>b;
	    if(a + (2*b) >= x){
	        cout <<"QUALIFY" <<endl;
	    }else{
	        cout <<"NOTQUALIFY" <<endl;
	    }
	}
	return 0;
}
