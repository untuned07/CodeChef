// Codechef Problem: https://www.codechef.com/problems/HIGHSCORE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n, na, nb, nc, nd;
	cin >>t;
	while(t--){
	    cin >>n;
	    cin >>na >>nb >>nc >>nd;
	   // if (na>=nb && na >=nc && na >=nd){cout <<na <<endl;}
	   // else if(nb >= na && nb >= nc && nb >=nd){cout <<nb <<endl;}
	   // else if(nc >= na && nc >= nb && nc >=nd){cout <<nc <<endl;}
	   // else{cout <<nd <<endl;}
	   cout <<max(max(na, nb), max(nc, nd)) <<endl;
	}
	return 0;
}
