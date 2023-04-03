// Codechef Problem: https://www.codechef.com/problems/CHFRICH

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b, x;
	    cin >>a >>b >>x;
	    if((b-a)%x==0){
	        cout <<(b-a)/x <<endl;
 	    }else{
 	        cout <<(b-a)/x+1 <<endl;
 	    }
	}
	return 0;
}
