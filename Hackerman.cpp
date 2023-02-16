// Codechef Problem: https://www.codechef.com/problems/PRIMEDICE

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b;
	    bool flag =1;
	    cin >>a >>b;
	    for(int i=2; i <= sqrt(a+b); i++){
	        if((a+b)%i==0){
	            flag = 0;
	        }
	    }
	    if(flag){
	        cout <<"Alice" <<endl;
	    }else{
	        cout <<"Bob" <<endl;
	    }
	}
	return 0;
}