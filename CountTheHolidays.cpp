// Codechef Problem: https://www.codechef.com/problems/SUNDAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int count = 8;
	    int n;
	    cin >>n;
	    count= count + n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >>arr[i];
	        if(arr[i]%7==0 || arr[i]%7==6){
	            count--;
	        }
	    }
	    cout <<count <<endl;
	}
	return 0;
}
