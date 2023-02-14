// Codechef Problem: https://www.codechef.com/problems/WATERFLOW


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,w,x,y,z;
	cin >>t;
	while(t--){
	    cin >>w >>x >>y >>z;
	    if ((y *z) + w > x){
	        cout <<"overFlow" <<endl;
	    }else if ((y * z) + w == x){
	        cout <<"filled" <<endl;
	    }else{
	        cout <<"Unfilled" <<endl;
	    }
	}
	return 0;
}
