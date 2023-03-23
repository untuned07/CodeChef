// Codechef Problem: https://www.codechef.com/problems/CFRTEST

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    sort(arr, arr+n);
    int count = 0;
    for(int i=0; i<n; i++){
        while (i < n - 1 && arr[i] == arr[i + 1]){
            i++;
        }
        count ++;
    }
    return count;
    
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x;
	    cin >>x; 
	    int a[x];
	    for(int i=0; i<x; i++){
	        cin >>a[i];
	    }
	    int val = solve(a, x);
	    cout <<val <<endl;
	}
	return 0;
}
