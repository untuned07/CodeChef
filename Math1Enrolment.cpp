// Codechef Problem: https://www.codechef.com/problems/M1ENROL


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t;
	double x, y;
	cin >>t;
	if (1 <= t && t <= 100){
	    for (i=1; i <= t; i++){
	        cin >>x >>y;
	        if (1<=x && 1<=y && x <= 100000 && y <= 100000){
	            if (x >= y){
	                cout << "0" <<endl;
	            }
	            else{
	                cout << y - x <<endl;
	            }
	        }
	    }
	}
	return 0;
}