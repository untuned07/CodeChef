// Codechef Problem: https://www.codechef.com/submit/TAXES


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    if(n >100){
	        cout <<n-10 <<endl;
	    }else{
	        cout <<n <<endl;
	    }
	}
	return 0;
}
