// Codechef Problem: https://www.codechef.com/problems/NEARESTEXIT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x;
	    cin >>x;
	    if((x-1)<(100-x)){
	        cout <<"LEFT" <<endl;
	    }else{
	        cout <<"RIGHT" <<endl;
	    }
	}
	return 0;
}
