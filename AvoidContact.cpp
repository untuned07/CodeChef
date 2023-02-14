// Codechef Problem: https://www.codechef.com/problems/AVOIDCONTACT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x >>y;
	    if(y==0){
	        cout <<x <<endl;
	    }else if(x > y){
	        cout <<(2*y)+(x-y) <<endl;
	    }else{
	        cout <<(y*2)-1 <<endl;
	    }
	}
	return 0;
}
