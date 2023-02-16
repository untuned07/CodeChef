// Codechef Problem: https://www.codechef.com/problems/BULBLIFE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >>t;
	while (t--){
	    cin >>n >>x;
	    int arr[n-1];
	    int sum = 0;
	    for (int i = 0; i <n-1; i++){
	        cin >>arr[i];
	        sum += arr[i];
	    }
	    int res = (n * x) - sum;
	    if(res < 0){cout<<"0" <<endl;}
	    else{
	        cout <<res <<endl;
	    }
	}
	return 0;
}
