// Codechef Problem: https://www.codechef.com/problems/VOLCONTROL

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x,y;
	cin >>t;
	for(i=1; i<=t; i++){
	    cin >>x >>y;
	    if (x >y){
	        cout <<x-y <<endl;
	    }else{
	        cout <<y-x <<endl;
	    }
	}
	return 0;
}
