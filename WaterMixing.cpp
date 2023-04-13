// Codechef Problem: https://www.codechef.com/NOV221D/problems/WTRMIXING


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, x, y;
	    cin >>a >>b >>x >>y;
	    if (a==b){
	        cout <<"YES" <<endl;
	    }else if(a > b){
	        if(a-y <= b){
	            cout <<"YES" <<endl;
	        }else{
	            cout <<"NO" <<endl;
	        }
	    }else{
	        if(a+x >=b){
	            cout <<"YES" <<endl;
	        }else{
	            cout <<"NO" <<endl;
	        }
	    }
	}
	return 0;
}
