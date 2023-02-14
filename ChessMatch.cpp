// Codechef Problem: https://www.codechef.com/problems/BLITZ3_2


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, a, b, i;
	cin >>t;
	if ( 1<= t && t <= 100000){
	    for (i = 1; i <= t; i++){
	        cin >>n >>a >>b;
	        if (0 <=a && 0 <= b && 10 <= n && n <= 100 && a<=(180 + n+1) && b<=(180 +n)){
	            int total = 2 * (180 + n);
	            cout <<total -(a + b) <<endl;
	        }
	    }
	}
	return 0;
}
