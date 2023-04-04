// Codechef Problem: https://www.codechef.com/problems/TALLER


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, a,b;
	cin >>t;
	if ( 1<= t && t <=1000){
	    
    	for ( i = 1; i<= t; i++){
    	    cin >>a >>b;
    	    if (100 <= a && 100 <=b && a <=200 && b<=200){
    	        if (a> b){
    	            cout <<"A" <<endl;
    	        }else{
    	            cout <<"B" <<endl;
    	        }
    	    }
    	}
	}
	return 0;
}
