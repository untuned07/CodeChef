// Codechef Problem: https://www.codechef.com/problems/HOWMANY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	 cin >>n;
	 int count = 0;
	 while(n>0){
	     count++;
	     n=n/10;
	 }
	 if(count > 3){
	     cout <<"More than 3 digits" <<endl;
	 }else{
         cout <<count <<endl;
	 }
	return 0;
}
