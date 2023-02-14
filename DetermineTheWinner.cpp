// Codechef Problem: https://www.codechef.com/problems/WINNERR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, pa, pb, qa, qb;
	cin >>t;
	while (t--){
	    cin >>pa >>pb >>qa >>qb;
	    int pt, qt;
	    if (pa >= pb){pt = pa;}else{pt = pb;}
	    if (qa >= qb){qt = qa;}else{qt = qb;}
	    if (pt == qt){cout <<"TIE" <<endl;}
	    else if(pt < qt){cout <<"P" <<endl;}
	    else{cout <<"Q" <<endl;}
	}
	return 0;
}
