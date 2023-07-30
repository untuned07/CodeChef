#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    int x, y; 
	    std::cin >>x >>y;
	    if((15*x) >= (2 * y)){
	        std::cout <<"YES" <<std::endl;
	    }
	    else std::cout <<"NO" <<std::endl;
	}
	return 0;
}
