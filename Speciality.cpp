// Codechef Problem: https://www.codechef.com/problems/SPECIALITY

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x, y, z;
	    cin >>x >>y >>z;
	    if(x > max(y, z)){
	        cout <<"SETTER" <<endl;
	    }else if(y > max(x, z)){
	        cout <<"TESTER" <<endl;
	    }else{
	        cout <<"EDITORIALIST" <<endl;
	    }
	}
	return 0;
}
