// Codechef Problem: https://www.codechef.com/problems/SNAPE


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    long double b, ls, min, max;
	    cin >>b >>ls;
	    max = sqrt((b * b)+ (ls * ls));
	    min = sqrt((ls * ls) - (b * b));
	    cout <<min <<" " <<max <<endl;
	}
	return 0;
}
