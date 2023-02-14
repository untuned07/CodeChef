// Codechef Problem: https://www.codechef.com/problems/CHEFBOTTLE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x, k;
	cin >>t;
	while(t--){
	    cin >>n >>x >>k;
	    int fill = k / x;
	    if(fill <= n){
	        cout <<fill <<endl;
	    }else{
	        cout <<n <<endl;
	    }
	}
	return 0;
}
