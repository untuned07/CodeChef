// Codechef Problem: https://www.codechef.com/problems/POLYBAGS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin>>t;
	while(t--){
	    cin >>n;
	    if (n % 10 == 0){
	        cout <<n / 10 <<endl;
	    }else{
	        cout <<n / 10 + 1 <<endl;
	    }
	}
	return 0;
}
