// Codechef Problem: https://www.codechef.com/problems/BIRYANI

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, y;
	cin >>t;
	if (1<= t && t <= 10000){
	    for (i= 0; i < t; i++){
	        cin >>x >>y;
	        if (1<= x && 1<= y && x <= 100 && y<=100){
	            cout <<x * y <<endl;
	        }
	    }
	}
	return 0;
}
