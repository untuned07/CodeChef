#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    int n;
	    std::cin >>n;
	   // if(n == 50) std::cout <<0 <<std::endl;
	    int count= 0;
	    while(n != 50){
	        if(n < 50){
	            count++;
	            n+= 2;
	        }else{
	            count++;
	            n-=3;
	        }
	    }
	    std::cout <<count <<std::endl;
	}
	return 0;
}
