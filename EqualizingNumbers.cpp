// Codechef Problem: https://www.codechef.com/problems/EQLZING

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b;
	    cin >>a >>b;
	    if((abs(a-b))%2 ==0){
	        cout <<"Yes" <<endl;
	    }else{
	        cout <<"No" <<endl;
	    }
	}
	return 0;
}
