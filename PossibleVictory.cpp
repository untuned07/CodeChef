// Codechef Problem: https://www.codechef.com/problems/T20MCH


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r, o, c;
	cin >>r >>o >>c;
	int make = (20 - o) * 6 * 6;
	if(make > r-c){
	    cout <<"YES" <<endl;
	}else{
	    cout <<"NO" <<endl;
	}
	return 0;
}
