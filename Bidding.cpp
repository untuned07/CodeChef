// Codechef Problem: https://www.codechef.com/problems/AUCTION


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, a, b,c;
	cin >>t;
	if (1<= t && t <= 1000){
	    for (i = 1; i <= t; i++){
	        cin >>a >>b >>c;
	        if (1<=a && 1<=b && 1<= c && a<=1000 && b<=1000 && c<=1000){
	            if (a > b && a > c){
	                cout <<"Alice" <<endl;
	            }else if (b >a && b> c){
	                cout <<"Bob" <<endl;
	            }else{
	                cout <<"Charlie" <<endl;
	            }
	        }
	    }
	}
	return 0;
}
