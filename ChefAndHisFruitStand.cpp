// Codechef Problem: https://www.codechef.com/problems/FRUITCHAAT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while(t--){
	    cin >>x >>y;
	    if(x/2 < y){
	        cout <<x / 2 <<endl;
	    }else{
	        cout <<y <<endl;
	    }
	}
	return 0;
}
