// Codechef Problem: https://www.codechef.com/problems/FLOW018


#include <iostream>
using namespace std;

// int fact (int n){
//     int factorial = 1;
//     if(n == 0 || n ==1){
//         return;
//     }else{
//         factorial = factorial * n;
//         n--;
//     }
//     return factorial;
// }

int main() {
	// your code goes here
	int t, n;
// 	int fact = 1;
	cin >>t ;
	while (t--){
	    cin >>n;
	    int fact = 1;
	    while(n> 0){
	        fact *= n;
	        n--;
	    }
	    cout <<fact <<endl;
	   // cout <<fact(n) <<endl;
	}
	return 0;
}
