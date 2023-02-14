// Codechef Problem: https://www.codechef.com/LP1TO201/problems/CHFSPL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, c;
	    cin >>a >>b >>c;
	    if(a >=b && a>=c){
	        if(b>=c){
	            cout <<a+b <<endl;
	        }else{
	            cout <<a+c <<endl;
	        }
	    }else if(b>=a && b>=c){
	        if(a >=c){
	            cout<<b+a <<endl;
	        }else{
	            cout <<b+c <<endl;
	        }
	    }else{
	        if(a>=b){
	            cout <<c+a <<endl;
	        }else{
	            cout <<c+b <<endl;
	        }
	    }
	}
	return 0;
}
