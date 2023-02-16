// Codechef Problem: https://www.codechef.com/problems/HARDBET


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c;
	cin >>t;
	while(t--){
	    cin >>a >>b >>c;
	    if(a <= b && a <= c){cout <<"Draw" <<endl;}
	    else if(b <= a && b <= c){cout <<"Bob" <<endl;}
	    else if(c <= a && c <= b){cout <<"Alice" <<endl;}
	}
	return 0;
}
