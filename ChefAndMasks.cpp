// Codechef Problem: https://www.codechef.com/problems/CMASKS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while (t--){
	    cin >>x >>y;
	    if((x *100) < (y*10)){
	        cout <<"Disposable" <<endl;
	    }else{
	        cout <<"Cloth" <<endl;
	    }
	}
	return 0;
}
