// Codechef Problem: https://www.codechef.com/submit/BOOKPACK


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y, z;
	    cin >>x >>y >>z;
	    int count;
	    if(y%z == 0){
	        count = y/z;
	    }else{
	        count = (y/z) + 1;
	    }
	    cout <<count * x <<endl;
	}
	return 0;
}
