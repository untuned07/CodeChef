// Codechef Problem: https://www.codechef.com/problems/WAITTIME


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, k, x;
	cin >>t;
	if(1<=t && t<=500){
	    for (i =1; i<=t;i++){
	        cin >>k >>x;
	        if(1<=k && 1<=x && k<=10 && x<7*k){
	            cout <<((k*7) - x) <<endl;
	        }
	    }
	}
	return 0;
}
