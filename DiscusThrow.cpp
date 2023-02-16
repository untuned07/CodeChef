// Codechef Problem: https://www.codechef.com/problems/DISCUS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c;
	cin >>t;
	while (t--){
	    cin >>a >>b >>c;
	    if (a >=b && a >=c){
	        cout <<a <<endl;
	    }else if (b >= a && b >= c){
	        cout <<b <<endl;
	    }else if (c >= a && c>= b){
	        cout <<c <<endl;
	    }
	}
	return 0;
}
