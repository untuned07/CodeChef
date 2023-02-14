// Codechef Problem: https://www.codechef.com/problems/CHEFONDATE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t,x , y;
	cin >>t;
	for ( i =1; i<=t; i++){
	    cin >>x >>y;
	    if(x >= y){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
