// Codechef Problem: https://www.codechef.com/problems/DETSCORE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, n;
	cin >>t;
	if (1<= t && t <= 100){
	    for ( i = 1; i <= t; i++){
	        cin >>x >>n;
	        if (10<=x && x <= 200 && 0<=n && n<=10){
	            int points = x /10;
	            cout <<points * n <<endl;
	        }
	    }
	}
	return 0;
}
