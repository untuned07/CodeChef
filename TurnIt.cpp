// Codechef Problem: https://www.codechef.com/LP1TO201/problems/NFS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int u, v, a, s;
	    cin >>u >>v >>a >>s;
	        if((u*u)-(2*a*s)<= v*v){
	            cout <<"Yes" <<endl;
	        }else{
	            cout <<"No" <<endl;
	        }
	}
	return 0;
}
