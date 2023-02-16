// Codechef Problem: https://www.codechef.com/problems/NIBBLE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while (t--){
	    cin >>n;
	    if (n % 4 == 0){
	        cout <<"GOOD" <<endl;
	    }else{
	        cout <<"NOT GOOD" <<endl;
	    }
	}
	return 0;
}
