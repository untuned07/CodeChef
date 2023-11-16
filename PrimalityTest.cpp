// Codechef Problem: https://www.codechef.com/problems/PRB01


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	int check = 1;
	    cin >>n;
	    if(n == 1){
	        cout <<"no" <<endl;
	    }else{
	    for(int i=2; i < n; i++){
	        if(n % i == 0){
	            check = 0;
	        }
	    }
	    if(check == 0){
	        cout <<"no" <<endl;
	    }else{
	        cout <<"yes" <<endl;
	    }
	    }
	}
	return 0;
}
