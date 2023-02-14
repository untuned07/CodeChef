// Codechef Problem: https://www.codechef.com/problems/BESTOFTWO


#include <iostream>
using namespace std;

void max(int x, int y){
    if(x> y){
        cout<< x <<endl;
    }else{
        cout << y <<endl;
    }
}

int main() {
	// your code goes here
	int t;
	
	cin >> t;
	if(1 <= t && t <= 1000){
	    for (int i=1; i <= t; i++){
	        int x;
	        cin >> x;
	        int y;
	        cin >> y;
	        max(x,y);
	    }
	}
	return 0;
}
