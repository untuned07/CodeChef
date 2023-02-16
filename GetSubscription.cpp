// Codechef Problem: https://www.codechef.com/problems/SUBSCRIBE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x;
	cin >>t;
	if(1<=t && t<=100){
	    for (i = 1; i<=t; i++){
	        cin >>x;
	        if(1<=x && x<=100){
	            if(x<=30){cout <<"NO" <<endl;}
	            else{cout<<"YES" <<endl;}
	        }
	    }
	}
	return 0;
}
