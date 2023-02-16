// Codechef Problem: https://www.codechef.com/problems/JGAMES


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while(t--){
	    cin >>x >>y;
	    if(abs(x-y) % 2 == 0){
	        cout <<"Janmansh" <<endl;
	    }else{
	        cout <<"Jay" <<endl;
	    }
	}
	return 0;
}
