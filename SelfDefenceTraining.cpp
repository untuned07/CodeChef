// Codechef Problem: https://www.codechef.com/problems/SELFDEF


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while (t--){
	    cin >>n;
	    int arr[n];
	    int count = 0;
	    for (int i= 0; i <n ; i++){
	        cin >>arr[i];
	        if (arr[i]>=10 && arr[i] <= 60){count++;}
	    }
	    cout <<count <<endl;
	}
	return 0;
}
