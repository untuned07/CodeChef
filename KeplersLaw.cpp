// Codechef Problem: https://www.codechef.com/problems/KEPLERSLAW


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, t1, t2, r1, r2;
	cin >>t;
	while(t--){
	    cin >>t1 >>t2 >>r1 >>r2;
	    float a, b;
	    a = ((float)t1 * (float)t1)/((float)r1 * (float)r1 * (float)r1);
	    b = ((float)t2 * (float)t2)/((float)r2 * (float)r2 * (float)r2);
	   // if(((t1 * t1)/(r1 * r1 * r1)) == ((t2 * t2)/(r2 * r2 * r2))){
	   if(a == b){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
