// Codechef Problem: https://www.codechef.com/problems/BROKENPHONE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >>t;
	while(t--){
	    int x, y;
	    cin >>x >>y;
	    if(x == y){
	        cout <<"ANY" <<endl;
	    }else if(x > y){
	        cout <<"NEW PHONE" <<endl;
	    }else{
	        cout <<"REPAIR" <<endl;
	    }
	}
	return 0;
}
