// Codechef Problem: https://www.codechef.com/problems/TABLET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, b;
	    bool flag = 0;
	    cin >>n >>b;
	    int w[n], h[n], p[n];
	    for(int i=0; i<n; i++){
	        cin >>w[i] >>h[i] >>p[i];
	    }
	    int maxi=INT_MIN, val=0;
	    for(int i=0; i<n; i++){
	        if(p[i] <= b){
	            flag = 1;
	            val = w[i] * h[i];
	            maxi = max(maxi, val);
	        }
	    }
	    if(flag){
	        cout <<maxi <<endl;
	    }else{
	        cout <<"no tablet" <<endl;
	    }
	}
	return 0;
}
