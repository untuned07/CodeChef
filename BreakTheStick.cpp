// Codechef Problem: https://www.codechef.com/problems/BREAKSTICK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x;
	    cin >>n >>x;
	    if(x ==  1){
	        cout <<"Yes" <<endl;
	    }else{
	    if((x%2 ==0 && ((n-x)%2 == 0)) || ((x%2 != 0) && ((n-x)%2 != 0)) || ((x%2 != 0) && ((n-x)%2 == 0))){
	        cout <<"Yes" <<endl;
	    }else{
	        cout <<"No" <<endl;
	    }
	}
	}
	return 0;
}
