// Codechef Problem: https://www.codechef.com/problems/APPLEORANGE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, o, hcf = 1;
	    cin >>a >>o;
	   // int low;
	   // if(a < o) low = a;
	   // else low = o;
	   // for(int i=1; i<=low; i++){
	   //     if(a%i == 0 && o%i == 0){
	   //         hcf = i;
	   //     }
	   // }
	    while(a != o){
	        if(a > o) a -= o;
	        else o -= a;
	    }
	    hcf = a;
	    cout <<hcf <<endl;
	}
	return 0;
}
