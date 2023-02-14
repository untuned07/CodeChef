// Codechef Problem: https://www.codechef.com/problems/LOOP


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, m;
	cin >>t;
	while(t--){
	    cin >>a >>b >>m;
	    int s = b - a;
	    int r = min((m - a) + b, (m - b) + a);
	    if (s < 0){s = s * -1;}
	    if(s < r){cout <<s <<endl;}
	    else{cout <<r <<endl;}
	}
	return 0;
}
