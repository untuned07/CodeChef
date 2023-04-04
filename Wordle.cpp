// Codechef Problem: https://www.codechef.com/problems/WORDLE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	string s, g;
	cin>>t;
	while(t--){
	    cin >>s >>g;
	    string m;
	    for (int i=0; i< 5; i++){
	        if(s[i] == g[i]){
	            m[i] ='G';
	        }else{
	            m[i] = 'B';
	        }
	    cout <<m[i];
	    }
    cout<<endl;
	}
	return 0;
}
