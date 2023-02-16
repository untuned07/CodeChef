// Codechef Problem: https://www.codechef.com/problems/MINCOINS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >>t;
	while(t--){
	    cin >>x;
	    if(x % 5 != 0){
	        cout <<"-1" <<endl;
	    }else{
	        int res = x/10;
	        if (res * 10 == x){cout <<res <<endl;}
	        else{cout <<res + 1 <<endl;}
	    }
	}
	return 0;
}
