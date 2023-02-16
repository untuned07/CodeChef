// Codechef Problem: https://www.codechef.com/problems/FLOW016


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long int a, b;
	cin >>t;
	while(t--){
	    cin >>a >>b;
	   // int gcd;
	   // for (int i = 1; i <= a && i <= b; i++){
	   //     if (a % i ==0 && b %i == 0){
	   //         gcd = i;
	   //     }
	   // }
	   // long long int lcm = (a * b) / gcd;
	   // cout <<gcd <<" " <<lcm <<endl;
	   cout <<__gcd(a, b) <<" " <<((a * b)/__gcd(a, b)) <<endl;
	}
	return 0;
}
