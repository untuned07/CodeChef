// Codechef Problem: https://www.codechef.com/problems/ACCURACY


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x;
	cin >> t;
	if (1<=t && t<=100){
	    for (i =1; i<=t; i++){
	        cin >>x;
	        if (0<=x && x <= 100){
	            if (x % 3 == 0){
	                cout <<0 <<endl;
	            }else{     
	                int rem = x % 3;
	                cout << 3 - rem <<endl;
	            }
	        }
	    }
	}
	return 0;
}
