// Codechef Problem: https://www.codechef.com/problems/CBSPEED

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, y;
	cin >>x >>y;
	if(1<=x && 1<=y && x<=100 && y<=100){
	if (x >= y){
	    cout <<"NO" <<endl;
	}else{
	    cout <<"YES" <<endl;
	}
	}
	return 0;
}
