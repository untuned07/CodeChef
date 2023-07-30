#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    string s;
	    std::cin >>s;
	    int n = s.size();
	    if(n < 2) std::cout <<s <<std::endl;
	    else{
	       int val = 0;
	       for(int i = n-2; i<n; i++){
	           val = val*10 + ((int)s[i]-48);
	       }
	       std::cout <<val%20 <<std::endl;
	    }
	}
	return 0;
}
