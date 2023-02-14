// Codechef Problem: https://www.codechef.com/problems/CCHOCOLATES

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, y, z;
	cin >>t;
	for (i =1; i <=t; i++){
	    cin >>x >>y >>z;
	    int money = x*5 + y *10;
	    cout<<money /z <<endl;
	}
	return 0;
}
