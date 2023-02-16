// Codechef Problem: https://www.codechef.com/problems/FLOW011


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	long double s;
	cin >>t;
	while(t--){
	    cin >>s;
	    long double sal;
	    if(s < 1500){
	        sal = s + (s * 0.1) + (s * 0.9);
	    }else{
	        sal = s + 500 + (s * 0.98);
	    }
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
	    cout <<sal <<endl;
	}
	return 0;
}
