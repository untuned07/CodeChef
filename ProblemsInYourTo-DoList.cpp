// Codechef Problem: https://www.codechef.com/problems/TODOLIST


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int arr[n];
	    int count = 0;
	    for (int i=0; i <n; i++){
	        cin >>arr[i];
	        if (arr[i] >= 1000){
	            count++;
	        }
	    }
	    cout <<count <<endl;
	}
	return 0;
}
