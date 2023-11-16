// Codechef Problem: https://www.codechef.com/LP1TO205/problems/BALLOON

// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	    }
	    int count = 0;
	    int val = 0;
	    for(int i=0; i<n; i++){
	        if(a[i]>= 1 && a[i]<8){
	            count++;
	        }
	        if(count == 7){
	            val = i+1;
	            break;
	        }
	    }
	    std::cout<<val <<std::endl;
	}
	return 0;
}
