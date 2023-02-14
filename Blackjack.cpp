// Codechef Problem: https://www.codechef.com/problems/BLACKJACK


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a, b;
	cin >>t;
	while(t--){
	    cin >>a >>b;
	    int res = 21 - (a + b);
	    if (res > 10){
	        cout <<"-1" <<endl;
	    }else{cout <<res <<endl;}
	}
	return 0;
}
