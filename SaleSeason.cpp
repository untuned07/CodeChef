// Codechef Problem: https://www.codechef.com/problems/SALESEASON

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x;
	    cin >>x;
	    if(100 < x && x <=1000){
	        cout <<x-25  <<endl;
	    }else if(1000<x && x <= 5000){
	        cout <<x - 100 <<endl;
	    }else if (x > 5000){
	        cout <<x - 500 <<endl;
	    }else{
	        cout <<x <<endl;
	    }
	}
	return 0;
}
