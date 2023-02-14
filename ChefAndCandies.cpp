// Codechef Problem: https://www.codechef.com/problems/CHEFCAND

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, n, x;
	cin >>t;
	if (1 <= t && t <= 1000){
	    for ( i =1; i <=t; i++){
	        
	    cin >>n >>x;
	    if (1<=n && 1<=x && n<=100 && x<=100){
	        if (x >= n){
	            cout << "0" <<endl;
	        }else{
	            int rem= n-x;
	            int temp = rem /4;
	            if (temp * 4 == rem){
	                cout <<temp <<endl;
	            }else{
	                cout << temp+1 <<endl;
	            }
	        }
	    }
	    }
	}
	return 0;
}
