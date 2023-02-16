// Codechef Problem: https://www.codechef.com/problems/AMR15A


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, n;
	cin >>n;
	int a[n];
	for (i = 0; i <n ; i++){
	    cin >>a[i];
	}
	int even=0, odd=0;
	for (i =0; i< n; i++){
	    if (a[i] %2 == 0){even += 1;}else{odd +=1;}
	}
	if(even > odd){cout <<"READY FOR BATTLE" <<endl;}
	else{cout <<"NOT READY" <<endl;}
	return 0;
}
