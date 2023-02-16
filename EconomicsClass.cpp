// Codechef Problem: https://www.codechef.com/problems/ECOCLASS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int count = 0;
	    int s[n], d[n];
	    for (int i = 0; i < n; i++){
	        cin >>s[i];
	    }
	    for (int i = 0; i < n; i++){
	        cin >>d[i];
	    }
	    for (int i= 0; i < n ; i++){
	        if(s[i] == d[i]){
	            count++;
	        }
	    }
	    cout <<count <<endl;
	}
	return 0;
}
