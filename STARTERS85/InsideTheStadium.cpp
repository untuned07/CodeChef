#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    int n; 
	    std::cin >>n; 
	    int a[n];
	    int count = 0;
	    int sum = 0;
	    
	    for(int i=0; i<n; i++){
	        std::cin >>a[i];
	        sum += a[i];
	        if(sum == i+1) count++;
	    }
	    std::cout <<count <<std::endl;
	}
	return 0;
}
