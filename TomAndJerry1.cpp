// Codechef Probelm: https://www.codechef.com/LP1TO201/problems/TANDJ1?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, c, d, k;
	    cin >>a >>b >>c >>d >>k;
	    int x = abs(a-c);
	    int y = abs(b-d);
	    int s = x+y;
	    
	    if(k == s){
	        cout <<"YES"<<endl;
	    }else if(k<s) {
	        cout <<"NO" <<endl;
	    }else if((k-s)%2==0){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
