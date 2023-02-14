// Codechef Problem: https://www.codechef.com/problems/CARCHOICE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x1, x2, y1, y2;
	cin>>t;
	while(t--){
	    cin >>x1 >>x2 >>y1 >>y2;
	    float a = ((float)y1 / (float)x1), b = ((float)y2/(float)x2);
	    if(a == b){
	        cout <<"0" <<endl;
	    }else if(a < b){
	        cout <<"-1" <<endl;
	    }else{cout <<"1" <<endl;}
	}
	return 0;
}
