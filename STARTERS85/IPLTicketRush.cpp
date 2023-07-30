#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int m, n; 
	    std::cin >>n >>m; 
	    if(n > m) std::cout <<n-m <<std::endl;
	    else std::cout <<0 <<std::endl;
	}
	return 0;
}
