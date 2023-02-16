// Codechef Problem: https://www.codechef.com/problems/DOMINANT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b,c;
	cin >>t;
	while (t--){
	    cin >>a >>b >>c;
	    if (a> b+ c || b >a+c || c >a+b){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
