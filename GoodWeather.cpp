// Codechef Problem: https://www.codechef.com/problems/GOODWEAT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, arr[7];
	cin>>t;
	while(t--){
	    int s = 0;
	    for (int i = 0; i < 7; i++){
	        cin >>arr[i];
	        if(arr[i] == 1){s++;}
	    }
	    if(s >=4){
	        cout <<"YES" <<endl;
	    }else{
	        cout <<"NO" <<endl;
	    }
	}
	return 0;
}
