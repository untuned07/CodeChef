// Codechef Problem: https://www.codechef.com/START77D/problems/TEKKEN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, c;
	    cin >>a >>b >>c;
	    int min1 = min(b, c);
	    int maxi = max(b, c);
	    maxi = maxi-min1;
	    int min2 = min(a, maxi);
	    if(a-min2 > 0){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}