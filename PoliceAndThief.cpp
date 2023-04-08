// Codechef Problem: https://www.codechef.com/problems/POLTHIEF


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while (t--){
	    cin >>x >>y;
	    int loc = 0;
	    if (x < y){
	    while (x != y && x < y){
	        ++loc;
	        x += 2;
	        y +=1;
	    }
	    }else{
	        while (x!= y && x > y){
	            ++loc;
	            x-=2;
	            y-=1;
	        }
	    }
	    cout <<loc <<endl;
	}
	return 0;
}
