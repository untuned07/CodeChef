// Codechef Problem: https://www.codechef.com/problems/PERFECTTRIO

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, c;
	    cin >>a >>b >>c;
	    if(a == (b+c) || b == (a +c) || c == (a+b)){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
