// Codechef Problem: https://www.codechef.com/problems/BIN_BAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, a, b;
	    cin >>n >>a >>b;
	    int time = 0;
	    while(n>1){
	        n = n/2;
	        time++;
	    }
	    cout <<((time * a)+ ((time-1)*b)) <<endl;
	}
	return 0;
}
