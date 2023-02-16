// Codechef Problem: https://www.codechef.com/problems/MINFLIPS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int arr[n];
	    int sum = 0;
	    for (int i=0; i < n; i++){
	        cin >>arr[i];
	        sum += arr[i];
	    }
	    if(sum < 0){sum = sum * -1;}
	    if(n%2 != 0){
	        cout <<"-1" <<endl;
	    }else{
	        cout <<sum/2 <<endl;
	    }
	}
	return 0;
}
