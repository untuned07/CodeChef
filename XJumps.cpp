// Codechef Problem: https://www.codechef.com/problems/XJUMP

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y;
	    cin >>x >>y;
	    if(x%y == 0){
	        cout <<x/y <<endl;
	    }else{
	        int count = (x/y);
	        count = count + (x - (y * count));
	        cout <<count <<endl;
	    }
	}
	return 0;
}
