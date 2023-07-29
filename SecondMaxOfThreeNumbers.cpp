// https://www.codechef.com/problems/SNDMAX

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, a, b, c, smax;
	cin >>t;
	if (1<= t && t <=6){
	    for (i=1; i<=t; i++){
	        cin >>a >>b >>c;
	        if(a>b && a>c){
	            if(b>c){smax= b;}else{smax = c;}
	        }else if(b>a && b>c){
	            if(a>c){smax = a;}else{smax = c;}
	        }else{
	            if(a>b){smax=a;}else{smax=b;}
	        }
	        cout <<smax <<endl;
	    }
	}
	return 0;
}
