// Codechef Problem: https://www.codechef.com/problems/CUTPAPER

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, k;
	    cin >>n >>k;
	    int c = n/k;
	    cout <<c * c <<endl;
	}
	return 0;
}
