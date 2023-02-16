// Codechef Problem :https://www.codechef.com/problems/VOWELTB


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a;
	cin >>a;
	if(a =='A' || a == 'E' || a == 'I' || a == 'O' || a =='U'){
	    cout <<"Vowel" <<endl;
	}else{
	    cout <<"Consonant" <<endl;
	}
	return 0;
}
