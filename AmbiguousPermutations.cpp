// Codechef Problem: https://www.codechef.com/problems/PERMUT2


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n=1;
	// cin >>t;
	while(n != 0){
	    cin >>n;
		if(n == 0){break;}
	    int arr[n], rev[n];
	    for (int i = 0; i < n; i++){
	        cin >>arr[i];
	        rev[arr[i] - 1]= i + 1;
	    }
	    int check = 0;
	    for (int i = 0; i < n; i++){
			// cout <<rev[i] <<" ";
	        if(rev[i] != arr[i]){check = 1;}
	    }
	    if (check == 0){cout <<"ambiguous" <<endl;}
	    else {cout <<"not ambiguous" <<endl;}
	}
	return 0;
}