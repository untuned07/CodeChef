// Codechef Problem: https://www.codechef.com/problems/DPOLY


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int arr[n], degree;
	    for (int i=0; i <n; i++){
	        cin >>arr[i];
	        
	    }
	    for (int i = n - 1; i >=0; --i){
	        if(arr[i] != 0){
	            cout <<i <<endl;
	            break;
	        }
	    }
	}
	return 0;
}
