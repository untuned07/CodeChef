// Codechef Problem: https://www.codechef.com/problems/PROBCAT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >>t;
	while(t--){
	    cin >>x;
	    if(1<= x && x <100){
	        cout <<"Easy" <<endl;
	    }else if(100<= x && x < 200){
	        cout <<"Medium" <<endl;
	    }else if(200<= x && x <= 300){
	        cout <<"Hard" <<endl;
	    }
	}
	return 0;
}
