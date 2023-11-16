// Codechef Problem: https://www.codechef.com/problems/PRIZEPOOL


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, y;
	cin>>t;
	if (1<=t && t<=1000){
	    for (i=1; i<=t; i++){
	        cin >>x >>y;
	        if (1<=y && y<=x && x<=1000){
	            cout <<((10*x) + (90 * y)) <<endl;
	        }
	    }
	}
	return 0;
}
