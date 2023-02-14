// Codechef Problem: https://www.codechef.com/problems/RECIPE

#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2){
    int mini = min(n1, n2);
    int hcf;
    for (int i = 1; i <=  mini; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            hcf = i;
        }
    }
    return hcf;
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n; 
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	    }
	    int hcf = gcd(a[0], a[1]);
	    for(int i=2; i<n; i++){
	        hcf = gcd(hcf, a[i]);
	    }
	    for(int i=0; i<n; i++){
	        cout <<a[i]/hcf <<" ";
	    }
	    cout <<endl;
	}
	return 0;
}
