// Codechef Problem: https://www.codechef.com/problems/PALL01


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int temp = n;
	    int rev=0;
	    while(temp > 0){
	        rev = (rev * 10) + (temp % 10);
	        temp = temp / 10;
	    }
	    if(rev == n){cout <<"wins" <<endl;}
	    else{cout <<"loses" <<endl;}
	}
	return 0;
}
