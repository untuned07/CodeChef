// Codechef Problem: https://www.codechef.com/problems/WATERCOOLER1


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, m;
	cin >>t;
	while(t--){
	    cin >>x >>y >>m;
	    if (x * m < y){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
