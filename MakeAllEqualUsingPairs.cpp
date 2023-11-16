// Codechef probelm: https://www.codechef.com/LP1TO205/problems/PAIREQ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	    }
	    sort(a, a+n);
	    int maxocc = 1;
	    int lo = 1;
	    for(int i=0; i<n; i++){
	        if(a[i] != a[i+1]){
	            lo = 1;
	            continue;
	        }
	        lo++;
	        if(lo > maxocc){
	            maxocc = lo;
	        }
	    }
	    std::cout <<n - maxocc <<std::endl;
	}
	return 0;
}
