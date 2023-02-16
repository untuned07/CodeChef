// Codechef Problem: https://www.codechef.com/problems/LUCKYFR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, n, count;
	cin >>t;
	if (1<=t && t<=100000){
	    for (i = 1; i<= t; i++){
	        count = 0;
	        cin >>n;
	        while (n != 0){
	            int rem = n % 10;
	            if (rem == 4) count++;
	            n = n/10;
	        }
	        cout <<count <<endl;
	    }
	}
	return 0;
}
