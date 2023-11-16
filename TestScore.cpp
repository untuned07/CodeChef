// Codechef Problem: https://www.codechef.com/problems/CHEFSCORE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x, y;
	    bool flag = 0;
	    cin >>n >>x >>y;
	    for(int i=0; i<=n; i++){
	        if(i*x == y){
	            flag = 1;
	        }
	    }
	    if(flag){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
