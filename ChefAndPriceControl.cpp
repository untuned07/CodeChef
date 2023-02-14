// Codechef Problem: https://www.codechef.com/problems/PRICECON

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n >>k;
	    int a[n];
	    int oldsum = 0;
	    int newsum = 0;
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	        oldsum += a[i];
	        if(a[i]>k){
	            a[i]=k;
	        }
	        newsum += a[i];
	    }
	    cout <<(oldsum-newsum) <<endl;
	}
	return 0;
}
