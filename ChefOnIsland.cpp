// Codechef Probelm: https://www.codechef.com/problems/CCISLAND

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y, xr, yr, d;
	    cin>>x >>y >>xr >>yr >>d;
	    if((x/xr)>=d && (y/yr)>=d){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
