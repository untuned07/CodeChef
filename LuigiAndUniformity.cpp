// Codechef Problem: https://www.codechef.com/problems/DIVIDEMAKEEQ

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n], x;
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	        if(i==0){
	            x= a[i];
	        }else{
	            x = __gcd(x, a[i]);
	        }
	    }
	    int count=0;
	    for(int i=0; i <n; i++){
	        if(x != a[i]){
	            count++;
	        }
	    }
	    cout <<count <<endl;
	}
	return 0;
}
