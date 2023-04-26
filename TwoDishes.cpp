// Codechef Problem: https://www.codechef.com/LP1TO201/problems/TWODISH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, a, b, c;
	    cin >>n >>a >>b >>c;
	    if(n<=b && a+c >=n){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
