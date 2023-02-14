// Codechef Problem: https://www.codechef.com/problems/CONN


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, n, t;
	cin>>t;
	for(i=1; i <=t; i++){
	    cin>>n;
	    if(n==1 || n==3 || n==5){
	        cout <<"NO" <<endl;
	    }else{
	        cout <<"YES" <<endl;
	    }
	}
	return 0;
}
