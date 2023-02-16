// Codechef Problem: https://www.codechef.com/problems/MINPIZZA

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x;
	    cin >>n >>x;
	    int count;
	    if((n*x)%4 == 0){
	        count = ((n*x)/4);
	    }else{
	        count = ((n*x)/4) + 1;
	    }
	    cout <<count <<endl;
	}
	return 0;
}
