// Codechef Problem: https://www.codechef.com/problems/ENSPACE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, n, x, y;
	cin >>t;
	if (1<=t && t <= 100){
	    for (i = 1; i <= t; i++){
	    cin >>n >>x >>y;
	        if (1<=n && 1<=x && 1<=y && n<=100 && x <=100 && y<=100){
	            if (n -(1 * x) -(2 * y) >= 0){
	                cout <<"YES" <<endl;
	            }else{
	                cout <<"NO" <<endl;
	            }
	        }
	    }
	}
	return 0;
}
