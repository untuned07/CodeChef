// Codechef Problem: https://www.codechef.com/problems/FLOORS

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	 while (t--){
	     cin >>x >>y;
	     int fx = x / 10;
	     if(fx * 10 != x){fx += 1;}
	     int fy = y / 10;
	     if(fy * 10 != y){fy +=1;}
	     cout <<abs(fx - fy) <<endl;
	 }
	return 0;
}
