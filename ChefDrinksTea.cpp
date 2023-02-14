// Codechef Problem: https://www.codechef.com/problems/TEA


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t,x , y,z;
	cin >>t;
	if (1<= t && t <= 1000){
	    for(i = 1; i<= t; i++){
	        
	    cin >>x >>y >>z;
	    if (1<= x && 1<= y && 1<= z && x <= 100 && y<= 100 && z<= 100){
	        int rem = x / y;
	        if (rem * y == x){
	            cout << rem * z <<endl;
	        }else{
	            rem = rem + 1;
	            cout <<rem*z <<endl;
	        }
	    }
	    }
	}
	return 0;
}
