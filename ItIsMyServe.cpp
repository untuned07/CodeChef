// Codechef Problem: https://www.codechef.com/problems/MYSERVE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, p, q;
	cin >>t;
	while(t--){
	    cin >>p >>q;
	    if((p+q)%4 == 0 || (p+q)%4 == 1 ){
	        cout <<"ALICE" <<endl;
	    }else{
	        cout <<"BOB" <<endl;
	    }
	}
	return 0;
}
