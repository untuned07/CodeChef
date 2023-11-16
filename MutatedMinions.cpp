// Codechef Problem: https://www.codechef.com/problems/CHN15A


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	cin >>t;
	while(t--){
	    cin >>n >>k;
	    int arr[n];
	    int count = 0;
	    for(int i = 0; i < n; i++){
	        cin >>arr[i];
	        if((arr[i] + k)%7 == 0){
	            count++;
	        }
	    }
	    cout <<count <<endl;
	}
	return 0;
}
