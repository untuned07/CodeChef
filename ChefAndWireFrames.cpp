// Codechef Problem: https://www.codechef.com/problems/CWIREFRAME


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m, x;
	    cin >>n >>m >>x;
	    cout <<(x * (2 *(n + m))) <<endl;
	}
	return 0;
}
