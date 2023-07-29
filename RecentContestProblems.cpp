// Codechef Problem: https://www.codechef.com/problems/RECENTCONT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int start=0, ltime=0;
	    string arr[n];
	    for(int i=0; i <n; i++){
	        cin >>arr[i];
	        if(arr[i] == "START38"){start++;}
	        else if(arr[i] == "LTIME108"){ltime++;}
	    }
	    cout <<start <<" " <<ltime <<endl;
	}
	return 0;
}
