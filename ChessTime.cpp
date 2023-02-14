// Codechef Problem: https://www.codechef.com/problems/CHESSTIME


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t,n;
	cin >>t;
	for (i=1; i<=t; i++){
	    cin >>n;
	    int time = n*60;
	    cout <<time/20 <<endl;
	}
	return 0;
}
