// Codechef Problem: https://www.codechef.com/problems/PRACLIST


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, y;
	cin >>x >>y;
    if (1<= x && 1<=y && x <= 1000 && y<=1000){
        cout <<x-y <<endl;
    }
	return 0;
}
