// Codechef Problem: https://www.codechef.com/START77D/problems/AIRLINES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y, z;
	    cin >>x >>y >>z;
	    if(y <= 10*x){
	        cout <<y*z <<endl;
	    }else{
	        cout <<x*10*z <<endl;
	    }
	}
	return 0;
}
