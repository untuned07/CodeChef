// Codechef Problem: https://www.codechef.com/problems/CNTWRD


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, m;
	int i;
	cin >> t;
	if(1 <= t && t <= 100){
	    for (i = 1; i <= t; i++){
	        cin >>n >>m;
	        if (1 <= n && 1 <= m && n <= 100 && m <= 100){
	            cout << n*m <<endl;
	        }
	    }
	}
	return 0;
}
