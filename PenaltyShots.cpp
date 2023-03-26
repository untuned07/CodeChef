// Codechef Problem: https://www.codechef.com/problems/PENALTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int count1=0, count2=0;
	    int a[10];
	    
	    for(int i=0; i<10; i++){
	        cin >>a[i];
	       // if(i%2==0){
	       //     if(a[i] == 1){
	       //         count1++;
	       //     }
	       // }else{
	       //     if(a[i] == 1){
	       //         count2++;
	       //     }
	       // }
	       if(i%2 == 0 && a[i] == 1){
	           count1++;
	       }else if(a[i] == 1){
	           count2++;
	       }
	    }
	    
	    if(count1 == count2){
	        cout <<0 <<endl;
	    }else if(count1 > count2){
	        cout <<1 <<endl;
	    }else{
	        cout <<2 <<endl;
	    }
	}
	return 0;
}
