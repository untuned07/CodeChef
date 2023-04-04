// Codechef Problem: https://www.codechef.com/problems/FLOW005

#include <iostream>
using namespace std;

int sol(int n){
	int count = 0;
	count = n/100;
	n = n % 100;
	if(n == 0){return count;}
	count += n/50;
	n = n % 50;
	if(n == 0){return count;}
	count += n / 10;
	n = n % 10;
	if(n == 0){return count;}
	count += n / 5;
	n = n % 5;
	if(n == 0){return count;}
	count += n/2;
	n = n % 2;
	if(n == 0){return count;}
	count += n/1;
	n = n % 1;
	if(n == 0){return count;}
	return count;
}

int main(){
	int t, n;
	cin >>t;
	while(t--){
		cin >>n;
		int res = sol(n);
		cout <<res <<endl;
	}
	return 0;
}
