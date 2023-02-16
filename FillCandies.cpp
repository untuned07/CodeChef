// Codechef Problem: https://www.codechef.com/problems/FILLCANDIES


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k, m;
	cin >>t;
	while(t--){
	    cin >>n >>k >>m;
	    int h = k*m;
	    if (n % h ==0){
	        cout <<n/h <<endl;
	    }else{
	        cout<< (n/h)+1 <<endl;
	    }
	}
	return 0;
}
