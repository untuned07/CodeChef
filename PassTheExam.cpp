// Codechef Problem: https://www.codechef.com/problems/PASSTHEEXAM


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, a, b, c;
	cin >>t;
	if (1<=t && t <= 1000){
	    for (i= 1;  i <= t; i++){
	        cin >>a >>b >>c;
	        if (0<=a && 0 <=b && 0<=c && a <= 100 && b <=100 && c<=100){
	            if (a >= 10 && b >=10 && c>=10){
	                if ((a + b + c) >=100){
	                    cout <<"PASS" <<endl;
	                }else{
	                    cout <<"FAIL" <<endl;
	                }
	            }else{
	                cout <<"FAIL" <<endl;
	            }
	        }
	    }
	}
	return 0;
}
