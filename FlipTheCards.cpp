// Codechef Problem: https://www.codechef.com/problems/FLIPCARDS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x;
	    cin >>n >>x;
	    if(x==n || x==0){
	        cout <<0 <<endl;
	    }else if(x > n-x){
	        cout <<n-x <<endl;
	    }else{
	        cout <<x <<endl;
	    }
	}
	return 0;
}
