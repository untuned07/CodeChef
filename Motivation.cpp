// Codechef Probelm: https://www.codechef.com/LP1TO201/problems/IMDB

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x;
	    cin >>n >>x;
	    
	    int s[n], r[n];
	
	    for(int i=0; i<n; i++){
	        cin >>s[i] >>r[i];
	    }
	    int max = INT_MIN;
	    
	    for(int i=0; i<n; i++){
	        if(r[i]>max && s[i]<= x){
	            max = r[i];
	        }
	    }
	    cout <<max <<endl;
	}
	return 0;
}
