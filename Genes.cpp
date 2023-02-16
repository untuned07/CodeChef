// Codechef Problem: https://www.codechef.com/problems/GENE01


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a, b;
	cin >>a >>b;
	if(a == 'R' || b == 'R'){cout <<'R' <<endl;}
	else if(a == 'B' || b =='B'){cout <<'B' <<endl;}
	else{cout <<'G' <<endl;}
	return 0;
}
