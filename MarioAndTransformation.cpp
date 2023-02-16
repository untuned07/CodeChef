// Codechef Problem: https://www.codechef.com/problems/TRANSFORM

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >>t;
	while (t--){
	    cin >>x;
	    if (x%3 ==1){cout <<"HUGE" <<endl;}
	    else if(x%3 ==2){cout <<"SMALL" <<endl;}
	    else{cout <<"NORMAL" <<endl;}
	}
	return 0;
}
