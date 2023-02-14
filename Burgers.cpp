// Codechef Problem: https://www.codechef.com/problems/BURGERS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, a, b;
	cin >>t;
	if (1<= t && t<=1000){
	    
	    for (i = 1; i <=t; i++){
	        cin >>a >>b;
	        if (1<= a && 1<=b && a<=100000 && b<=100000){
    	        if (a < b) {
    	            cout <<a <<endl;
    	        }else{
    	            cout <<b <<endl;
    	        }
	        }
    	}
	}
	return 0;
}
