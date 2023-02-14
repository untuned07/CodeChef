// Codechef Problem: https://www.codechef.com/problems/DARLIG

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	cin >>t;
	while(t--){
	    cin >>n >>k;
	    
	    if(k == 1 && n%4 == 0){cout <<"ON" <<endl;}
	    else if (k == 1 && n % 4 != 0){cout <<"AMBIGUOUS" <<endl;}
	    else if(k == 0 && n %4 == 0){cout <<"OFF" <<endl;}
	    else if (k == 0 && n % 4 != 0){cout <<"ON" <<endl;}
	}
	return 0;
}
