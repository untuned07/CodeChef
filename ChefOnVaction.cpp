// Codechef Problem: https://www.codechef.com/problems/CHEFVACATION

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
	    cin >>x >>y >>z;
	    if((x+y)<= z){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
