// Codechef Problem: https://www.codechef.com/problems/MAYOR_PARTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b, c;
	    cin >>a >>b >>c;
	    if(a+c > b){
	        cout <<(a+c) <<endl;
	    }else{
	        cout <<b <<endl;
	    }
	}
	return 0;
}
