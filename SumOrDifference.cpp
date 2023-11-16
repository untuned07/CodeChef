// Codechef Problem: https://www.codechef.com/problems/DIFFSUM

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >>n >>m;
	if (n > m){cout <<abs(n - m) <<endl;}
	else{cout <<n + m <<endl;}
	return 0;
}
