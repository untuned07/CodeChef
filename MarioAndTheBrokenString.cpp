// Codechef Prooblem: https://www.codechef.com/submit/BROKENSTRING


#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int mid = n/2;
	    string s, l, r;
	    cin >>s;
	    l = s.substr(0, mid);
	    r= s.substr(mid, n-1);
	    string sol1, sol2;
	    sol1 = l + r; 
	    sol2 = r + l;
	    if((sol1 == s) && (sol2 == s)){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
