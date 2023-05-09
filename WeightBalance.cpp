// Codechef Problem: https://www.codechef.com/LP1TO201/problems/WEIGHTBL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int w1, w2, x1, x2, m;
	    cin >>w1 >>w2 >>x1 >>x2 >>m;
	    if((w1+(x1*m) <= w2) && (w1+(x2*m) >= w2)){
	        cout <<1 <<endl;
	    }else{
	        cout <<0 <<endl;
	    }
	}
	return 0;
}
