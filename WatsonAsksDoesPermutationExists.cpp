// Codechef Problem: https://www.codechef.com/LP1TO205/problems/PERMEXIS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--){
	    int n;
	    std::cin >>n;
	    vector <int> a;
	    int val;
	    for(int i=0; i<n; i++){
	        std::cin >>val;
	        a.push_back(val);
	    }
	    sort(a.begin(), a.end());
	    bool flag = 1;
	    for(int i=0; i<n-1; i++){
	        int val = abs(a[i] - a[i+1]);
	        if(val > 1){
	            flag = 0;
	            break;
	        }
	    }
	    if(flag) std::cout <<"YES" <<std::endl;
	    else std::cout <<"NO" <<std::endl;
	}
	return 0;
}
