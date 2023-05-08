// Codechef Problem: https://www.codechef.com/START51C/problems/TVDISC


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, d;
	cin >>t;
	while(t--){
	    cin >>a >>b >>c >>d;
	    if((a - c == b - d)){cout <<"Any" <<endl;}
	    else if((a - c) < (b - d)){cout <<"First" <<endl;}
	    else{cout <<"Second" <<endl;}
	}
	return 0;
}
