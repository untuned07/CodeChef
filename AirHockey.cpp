// Codechef Problem: https://www.codechef.com/problems/AIRHOCKEY


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t,a,b;
	cin >>t;
	for (i=1;i<=t;i++){
	    cin >>a >>b;
	    if(a>=b){cout << 7-a << endl;}
        else{cout <<7-b <<endl;}
	}
	return 0;
}
