// Codechef Problem: https://www.codechef.com/problems/LOSTWKND

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[5], p;
	    for(int i=0; i<5; i++){
	        std::cin >>a[i];
	    }
	    cin >>p;
	    int total = 0;
	    for(int i=0; i<5; i++) {
	        a[i] = a[i] * p;
	        total += a[i];
	    }
	    if(total <= 24*5) std::cout <<"No" <<std::endl;
	    else std::cout <<"Yes" <<std::endl;
	}
	return 0;
}
