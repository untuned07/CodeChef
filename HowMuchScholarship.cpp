// Codechef Problem: https://www.codechef.com/problems/ZCOSCH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r;
	cin >>r;
	if(1<=r && r<=50){
	    cout <<100 <<endl;
	}else if(r<=100){
	    cout <<50 <<endl;
	}else{
	    cout <<0 <<endl;
	}
	return 0;
}
