// CodeChef Problem: https://www.codechef.com/problems/CHEFRUN

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    float x1, x2, x3, v1, v2;
	    cin >>x1 >>x2 >>x3 >>v1 >>v2;

        // How can this part be wrong?
        // It still applies t=d/s and comparison!
        /*
	    if((x3-x1)*v2 ==(x2-x3)*v1){
	        cout <<"Draw" <<endl;
	    }else if((x3-x1)*v2 >(x2-x3)*v1){
	        cout <<"Kefa" <<endl;
	    }else{
	        cout <<"Chef" <<endl;
	    }
        */

       
	    float d1 = x3 - x1;
	    float d2 = x2 - x3;
	    if(d1/v1 == d2/v2){
	       cout <<"Draw" <<endl;
	    }else if(d1/v1 > d2/v2){
	        cout <<"Kefa" <<endl;
	    }else{
	        cout <<"Chef" <<endl;
	    }
	}
	return 0;
}
