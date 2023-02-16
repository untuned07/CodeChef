// Codechef Problem: https://www.codechef.com/problems/INCREAR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
// 	int count;
	cin >>t;
	while (t--){
	   // count = 0;
	    cin >>x >>y;
	    cout << ((x <= y)? y - x : 1 -(x % 2 == y % 2)+(x - y + 1)/ 2) <<endl;
	   // while (x != y){
	   //     if(x < y){
	   //         x += 1;
	   //         count++;
	   //     }else{
	   //         y = y + 2;
	   //         count++;
	   //     }
	   // }
	   // cout <<count <<endl;
	}
	return 0;
}
