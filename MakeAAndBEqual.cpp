// Codechef Problem: https://www.codechef.com/problems/EQUALISE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a, b;
	    cin >>a >>b;
	    int l=max(a, b);
	    int s=min(a, b);
	    bool flag =0;
	    for(s; s<=l; s=s*2){
	        if(s == l){
	            flag=1;
	        }else{
	            s=s*2;
	        }
	    }
	    if(flag==0){
	        cout <<"No" <<endl;
	    }
	}
	return 0;
}
