// Codechef Problem: https://www.codechef.com/problems/FIT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x;
	cin >>t;
	if (1<=t && t<=10){
	    for (i = 1; i <= t; i++){
	        cin >>x;
	        if (1<=x && x <= 10){
	            cout <<x * 10 <<endl;
	        }
	    }
	}
	return 0;
}
