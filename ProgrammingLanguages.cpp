// Codechef Probelm: https://www.codechef.com/problems/PROGLANG

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, a1, b1, a2, b2;
	    cin >>a >>b >>a1 >>b1 >>a2 >>b2;
	    if(max(a, b) == max(a1, b1) && min(a, b) == min(a1, b1)){
	        cout <<1 <<endl;
	    }else if(max(a, b) == max(a2, b2) && min(a, b) == min(a2, b2)){
	        cout <<2 <<endl;
	    }else{
	        cout <<0 <<endl;
	    }
	}
	return 0;
}
