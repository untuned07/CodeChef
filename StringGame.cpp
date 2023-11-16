// Codechef Problem: https://www.codechef.com/NOV221D/problems/ABSTRING


#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    string s, a, b;
	    cin >>n;
	    cin >>s;
	    if(n%2 != 0){
	        cout <<"NO" <<endl;
	    }else{
	        sort(s.begin(), s.end());
	        for(int i=0; i<s.size(); i++){
	            if(i%2 == 0){
	                a += s[i];
	            }else{
	                b += s[i];
	            }
	        }
	        if(a == b){
	            cout <<"YES" <<endl;
	        }else{
	            cout <<"NO" <<endl;
	        }
	    }
	    
	}
	return 0;
}
