// Codechef Problem: https://www.codechef.com/problems/EXPERT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    float x, y;
        cin >>x >>y;
	    if(y >= x/2){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
