// Codechef Problem: https://www.codechef.com/problems/KTTABLE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin>>t;
	while(t--){
	    int count = 0;
	    cin >>n;
	    int a[n];
	    int b[n];
	    for (int i=0; i <n ;  i++){cin >>a[i];}
	    for (int i=0; i <n; i++){cin >>b[i];}
	    
	    for(int i = 0; i < n; i++){
	        if(i == 0){
	            if(a[i] >= b[i]){count++;}
	        }else{
	            if((a[i]- a[i-1]) >= b[i]){count++;}
	        }
	    }
	    cout <<count <<endl;
	}
	return 0;
}
