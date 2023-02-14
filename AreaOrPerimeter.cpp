// Codechef Problem: https://www.codechef.com/problems/AREAPERI


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l, b;
	cin >>l; 
	cin >>b;
	int area = l * b;
	int peri = 2 * (l + b);
	if(area == peri){
	    cout <<"Eq" <<endl;
	    cout <<area <<endl;
	}else if(area > peri){
	    cout <<"Area" <<endl;
	    cout <<area <<endl;
	}else{
	    cout <<"Peri" <<endl;
	    cout <<peri <<endl;
	}
	return 0;
}
