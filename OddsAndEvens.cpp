// Codechef Problem: https://www.codechef.com/problems/ODDSEVENS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b;
	cin >>t;
	while(t--){
	    cin >>a >>b;
	    if((a + b) % 2 == 0 ){
	        cout <<"Bob" <<endl;
	    }else{
	        cout <<"Alice" <<endl;
	    }
	}
	return 0;
}
