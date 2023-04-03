// Codechef Problem: https://www.codechef.com/problems/SST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b;
	cin >>t;
	while (t--){
	    cin >>a >>b;
	    if (a *10 == b *5){
	        cout <<"ANY" <<endl;
	    }else if (a *10 > b *5){
	        cout <<"FIRST" <<endl;
	    }else{
	        cout <<"SECOND" <<endl;
	    }
	}
	return 0;
}
