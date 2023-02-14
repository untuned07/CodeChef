// Codechef Problem: https://www.codechef.com/problems/ACS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, p;
	cin>>t;
	while(t--){
	    cin >>p;
	    int res = p/100;
	    int rem = p %100;
	    res = res + rem;
	    if (res > 10){
	        cout <<"-1" <<endl;
	    }else{
	        cout <<res <<endl;
	    }
	}
	return 0;
}
