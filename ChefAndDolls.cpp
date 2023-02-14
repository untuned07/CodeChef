// Codechef Problem: https://www.codechef.com/problems/MISSP

#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	    }
	    int c=0;
	    for(int i=0; i<n; i++){
	        c = c^a[i];
	    }
	    cout <<c <<endl;
	}
	return 0;
}
