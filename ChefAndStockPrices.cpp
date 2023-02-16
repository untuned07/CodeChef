//Codechef Problem: https://www.codechef.com/LP1TO201/problems/CSTOCK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    float s, a, b, n;
	    cin >>s >>a >>b >>n;
	    s = (s/100)*n +s;
	    if(a<=s && b>=s){
	        cout <<"Yes" <<endl;
	    }else{
	        cout <<"No" <<endl;
	    }
	}
	return 0;
}
