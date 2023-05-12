// Codechef Problem: https://www.codechef.com/problems/WATERCOOLER2

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin>>t;
	while(t--){
	    cin >>y >>x;
	    int res = x / y;
	    if (res * y == x){
	        cout <<res - 1 <<endl;
	    }else{
	        cout <<res <<endl;
	    }
	}
	return 0;
}
