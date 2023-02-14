// Codechef Problem: https://www.codechef.com/problems/AGELIMIT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,x,y,a;
	cin >> t;
	if (1<=t && t<=1000){
	    for (i =1; i<= t; i++){
	        cin >>x >>y >>a;
	        if (10<=a && a <=50 && 20<= x && 20 <= y && x<=40 && y<=40){
	            if (x<= a && a<y){
	                cout <<"YES" <<endl;
	            }else{
	                cout <<"NO" <<endl;
	            }
	        }
	    }
	}
	return 0;
}
