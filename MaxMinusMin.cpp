// Codechef Problem: https://www.codechef.com/problems/MAXDIFFMIN


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t; 
	while(t--){
	    int a, b, c;
	    cin >>a >>b >>c;
	   // int maxn, minn;
	   // maxn = max(a, b);
	   // maxn = max(maxn, c);
	   // minn = min(a, b);
	   // minn = min(minn, c);
	   // cout << maxn - minn <<endl;
	   
	   cout <<((max(max(a, b), c))-(min(min(a, b), c))) <<endl;
	}
	return 0;
}
