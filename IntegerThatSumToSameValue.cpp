// Codechef Problem: https://www.codechef.com/problems/SUMNEQ


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int count =0;
	for(int i=1; i<n; i++){
	    for(int j=n;j>0;j--){
	        if(i+j == n){
	            count++;
	        }
	    }
	}
	cout <<count <<endl;
	return 0;
}
