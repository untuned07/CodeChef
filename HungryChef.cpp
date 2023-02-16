// Codechef Problem: https://www.codechef.com/problems/BURGERS2

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, n, r;
	cin >>t;
	while(t--){
	    cin >>x >>y >>n >>r;
	    if((n * x)>r){
	        cout <<"-1" <<endl;
	    }else{
	        int Y = min((r - n * x)/(y - x), n);
	        int X = n - Y;
	        cout <<X <<" " <<Y <<endl;
	    }
	}
	return 0;
}
