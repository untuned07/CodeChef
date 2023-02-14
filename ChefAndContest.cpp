// Codechef Problem: https://www.codechef.com/problems/CHEFCONTEST


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y, p, q;
	    cin >>x >>y >>p >>q;
	    if(x +(10 * p) == y + (10 * q)){cout <<"Draw" <<endl;}
	    else if(x +(10 * p) < y + (10 * q)){cout <<"Chef" <<endl;}
	    else{cout <<"Chefina" <<endl;}
	}
	return 0;
}
