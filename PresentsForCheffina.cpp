// Codechef Problem: https://www.codechef.com/problems/PRESENTS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, t;
	cin>>t;
	while(t--){
	    cin >>n;
	    cout <<((n / 5) * 4 )+ (n % 5) <<endl;
	}
	return 0;
}
