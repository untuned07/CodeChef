// Codechef Problem: https://www.codechef.com/problems/SALE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c;
	cin >>t;
	while(t--){
	    cin >>a >>b >>c;
	    if (a <= b && a <= c){
	        cout <<b + c <<endl;
	    }else if(b <= a && b <= c){
	        cout <<a + c <<endl;
	    }else if(c <= a && c <= b){
	        cout <<a + b <<endl;
	    }
	}
	return 0;
}
