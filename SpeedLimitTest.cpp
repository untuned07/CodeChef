// Codechef Problem: https://www.codechef.com/problems/SPEEDTEST?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, x, y;
	    cin >>a >>x >>b >>y;
	    if(a*y == x*b){
	        cout <<"Equal" <<endl;
	    }else if(a*y > x*b){
	        cout <<"Alice" <<endl;
	    }else{
	        cout <<"Bob" <<endl;
	    }
	}
	return 0;
}
