// Codechef Probelm: https://www.codechef.com/problems/CHEFSTUD

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin >>s;
	    n = s.size();
	    int count = -1;
	    for(int i=0; i<n-1; i++){
	        if(s[i] =='<' && s[i+1] == '>'){
	            count++;
	        }
	    }
	    std::cout <<count <<std::endl;
	}
	return 0;
}
