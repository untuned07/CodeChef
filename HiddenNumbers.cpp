// Codechef Problem: https://www.codechef.com/problems/UWCOI21A

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin >>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1; i<=sqrt(n); i++){
	        if(n%i == 0){
	            cout <<i <<" " <<n/i <<endl;
	            break;
	        }
	    }
	}
	return 0;
}
