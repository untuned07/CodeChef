// CodeChef Probelem: https://www.codechef.com/problems/CNDLOVE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    int total = 0;
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	        total += a[i];
	    }
	    if(total%2 == 0) std::cout <<"NO" <<std::endl;
	    else std::cout <<"YES" <<std::endl;
	}
	return 0;
}
