// Codechef Problem: https://www.codechef.com/problems/CATSDOGS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, c, d, l;
	cin >>t;
	while(t--){
	    cin >>c >>d >>l;
	    int y =0;
        // l%4 == 0 && l/4 <= c+d ? cout<<"yes" <<endl : cout <<"no" <<endl;
        if(l%4 ==0){
            l = l/4;
            if(l >= d && l-d <= c){
                l -= d;
                if(c - l <= (2 * d)){
                    cout <<"yes" <<endl;
                    y = 1;
                }
            }
        }
        if( y == 0){
            cout <<"no" <<endl;
        }
	}
	return 0;
}
