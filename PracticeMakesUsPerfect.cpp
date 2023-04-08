// Codechef Problem: https://www.codechef.com/problems/PRACTICEPERF


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b, c,d;
	cin >>a >>b >>c >>d;
	int ans = 0;
	if (a >=10){ans++;}
	if (b >= 10) {ans++;}
	if (c >=10) {ans++;}
	if (d >= 10){ans++;}
	cout <<ans <<endl;
	return 0;
}
