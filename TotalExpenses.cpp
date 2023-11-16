// Codechef Problem: https://www.codechef.com/problems/FLOW009


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, q, p;
	cin>>t;
	while(t--){
	    cin >>q >>p;
	    double rate = q * p;
	    if(q > 1000){
	        rate = rate - (rate * 0.1);
	    }
	    cout<<setprecision(10) <<fixed;
	    cout <<rate <<endl;
	}
	return 0;
}
