// Codechef Problem: https://www.codechef.com/problems/ENCMSG

#include <bits/stdc++.h>
#include <string.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >>n;
	    string s;
	    cin >>s;
	    char temp;
	    if(n%2 == 0){
	        for(int i=0; i<n; i+=2){
	            temp = s[i];
	            s[i] = s[i+1];
	            s[i+1] = temp;
	        }
	    }else{
	        for(int i=0; i<n-1; i+=2){
	            temp = s[i];
	            s[i] = s[i+1];
	            s[i+1] = temp;
	        }
	    }
        cout <<s <<endl;
        for(int i=0; i<n; i++){
            s[i] = 'z' - s[i] + 97;
        }
	    
        cout <<s <<endl;
	}
	return 0;
}
