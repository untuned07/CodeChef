// Codechef Problem: https://www.codechef.com/problems/ODDSUMPAIR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, c;
	    cin >>a >>b >>c;
	    if(a%2==0 && b%2==0 &&c%2==0){
	        cout <<"NO" <<endl;
	    }else if(a%2==1 && b%2==1 && c%2==1){
	        cout <<"NO" <<endl;
	    }else{
	        cout <<"YES" <<endl;
	    }
	}
	return 0;
}
