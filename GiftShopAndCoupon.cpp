// Codechef Problem: https://www.codechef.com/LP1TO205/problems/GFTSHP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, m;
	    cin >>n >>m; 
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	    }
	    sort(a, a+n);
	    int sum = 0;
	    int count = 0;
	    for(int i: a){
	        sum += i;
	        if(sum <= m){
	            count++;
	        }else if(sum - (i/2) <= m){
	            count++;
	        }else{
	            break;
	        }
	    }
	    std::cout <<count <<std::endl;
	}
	return 0;
}
