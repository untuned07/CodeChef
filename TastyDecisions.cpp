// Codechef problem: https://www.codechef.com/submit/TASTEDEC

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y;
	    cin >>x >>y;
	    if(2*x > 5*y){
	        cout <<"Chocolate"<<endl;
	    }else if(5*y > 2*x){
	        cout <<"Candy"<<endl;
	    }else{
	        cout <<"Either"<<endl;
	    }
	}
	return 0;
}
