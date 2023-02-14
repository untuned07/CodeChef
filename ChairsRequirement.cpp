// Codechef Problem: https://www.codechef.com/problems/CHAIRS_

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t,x,y;
	cin>>t;
	if (1<=t && t<=1000){
	    for (i=1; i<=t; i++){
	        cin >>x >>y;
	        if (0<=x && 0<=y && x<=100 && y<=100){
	            if (y>=x){cout <<"0" <<endl;}
	            else{cout <<x-y <<endl;}
	        }
	    }
	}
	return 0;
}
