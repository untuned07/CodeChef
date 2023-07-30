#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    int n;
	    std::cin >>n;
	    if(n < 3) std::cout <<0 <<std::endl;
	    else{
	        if(n%2 == 0){
	            std::cout <<(3 * (n/2)-3) <<std::endl;
	        }else{
	            std::cout <<(3 * (n/2)-1) <<std::endl;
	        }
	    }
	}
	return 0;
}
