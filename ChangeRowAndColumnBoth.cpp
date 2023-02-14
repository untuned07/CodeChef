// Codechef Problem: https://www.codechef.com/problems/CHANGEPOS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, sx, sy, ex, ey;
	cin>>t;
	while (t--){
	    cin >>sx >>sy >>ex >>ey;
	    if(sx == ex || sy == ey){cout <<"2" <<endl;}
	    else{cout <<"1" <<endl;}
	}
	return 0;
}
