// Codechef Problem: https://www.codechef.com/problems/HDIVISR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int max, n;
	cin >>n;
	for(int i= 1; i <= 10 ; i++){
	    if(n % i == 0){
	        max = i;
	    }
	}
	cout <<max <<endl;
	return 0;
}
