// Codechef Problem: https://www.codechef.com/LP1TO201/problems/SMOL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, k;
	    cin >>n >>k;
	    if(k == 0){
	        cout <<n <<endl;
	    }else{
	        cout <<n-(k*(n/k)) <<endl;
	    }
	}
	return 0;
}
