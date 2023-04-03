// Codechef Problem: https://www.codechef.com/problems/MINHEIGHT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, x, h;
	cin >>t;
	if (1 <= t && t <=1000){
	    for(i = 1; i<=t; i++){
	        cin >>x >>h;
	        if(1<=x && 1<=h && x<=100 && h<=100){
	            if(x >= h){
	                cout <<"YES" <<endl;
	            }else{
	                cout <<"NO" <<endl;
	            }
	        }
	    }
	}
	return 0;
}
