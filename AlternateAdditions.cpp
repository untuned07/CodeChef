// Codechef Problem: https://www.codechef.com/problems/ALTERADD


#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int A,B;
	    cin >> A >> B;
	    if((B-A)%3<=1)cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}