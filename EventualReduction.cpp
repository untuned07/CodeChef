// Codechef Problem: https://www.codechef.com/problems/EVENTUAL

#include <string>
#include <string.h>
#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    string s;
	    int n;
	    cin >>n;
	    cin >>s;
	    int count = 0;
	    for(int i=0; i<n; i++){
	        count = 0;
	        for(int j=0; j<n; j++){
	            if(s[i] == s[j]){
	                count ++;
	            }
	        }
	        if(count %2 != 0){
	            cout <<"NO" <<endl;
	            break;
	        }
	    }
	    if(count %2 == 0){
	        cout <<"YES" <<endl;
	    }
	}
	return 0;
}
