#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    int m, n;
	    std::cin >>m >>n;
	    if((n*36) >= m){
	        std::cout <<"YES" <<std::endl;
	    }else {
	        std::cout <<"NO" <<std::endl;
	    }
	}
	return 0;
}
