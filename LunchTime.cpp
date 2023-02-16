// Codechef Problem: https://www.codechef.com/problems/LTIME


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t,x;
	cin >>t;
	for (i = 1; i <=t; i++){
	    cin >>x;
	    if(x==1 || x==2 || x==3 || x==4){
	        cout <<"YES" <<endl;
	    }else{cout <<"NO" <<endl;}
	}
	return 0;
}
