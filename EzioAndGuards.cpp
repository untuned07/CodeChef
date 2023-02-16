// CodeChef Problem: https://www.codechef.com/problems/MANIPULATE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while(t--){
	    cin >>x >>y;
	    if (y <= x){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
