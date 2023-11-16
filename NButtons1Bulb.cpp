// Codechef Problem: https://www.codechef.com/problems/ON_OFF


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	string si, sn;
	cin>>t;
	while(t--){
	    int c=0;
	    cin >>n;
	    cin >>si >>sn;
	   // cin >>sn;
	    for (int i=0; i<n; i++){
	        if(si[i] != sn[i]){c++;}
	    }
	    if(c %2 == 0){cout <<"1" <<endl;}
	    else{cout <<"0" <<endl;}
	}
	return 0;
}
