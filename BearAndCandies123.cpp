// Codechef Problem: https://www.codechef.com/problems/CANDY123

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b;
	    cin >>a >>b;
	    int i = 1;
	    while(a >= 0 && b >= 0){
	        if(i%2 != 0) a-=i;
	        else b -= i;
	        i++;
	    }
	    if(a < 0) std::cout <<"Bob" <<std::endl;
	    else std::cout <<"Limak" <<std::endl;
	}
	return 0;
}
