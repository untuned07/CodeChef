// Codechef Problem: https://www.codechef.com/problems/BMI

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, m, h, bmi;
	cin>>t;
	while (t--){
	    cin >>m >>h;
	    bmi = m / (h * h);
	    if(bmi <= 18){cout <<"1" <<endl;}
	    else if(bmi>18 && bmi <=24){cout <<"2" <<endl;}
	    else if(bmi > 24 && bmi <= 29){cout <<"3" <<endl;}
	    else if (bmi >= 30){cout <<"4" <<endl;}
	}
	return 0;
}
