// Codechef Problem: https://www.codechef.com/problems/RANKLISTPAGE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x;
	    cin >>x;
	    if(x%25 == 0){
	        cout <<x/25 <<endl;
	    }else{
	        cout <<((x/25) +1) <<endl;
	    }
	}
	return 0;
}
