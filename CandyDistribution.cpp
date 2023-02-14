// Codechef Problem: https://www.codechef.com/problems/CANDYDIST


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, m;
	    cin >>n >>m;
	    if(n%m != 0){
	        cout <<"No" <<endl;
	    }else{
	        if((n/m)%2 == 0){
	            cout <<"Yes" <<endl;
	        }else{
	            cout <<"No" <<endl;
	        }
	    }
	}
	return 0;
}
