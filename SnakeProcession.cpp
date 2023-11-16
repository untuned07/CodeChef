// Codechef Problem: https://www.codechef.com/problems/SNAKPROC


#include <bits/stdc++.h>
#include <string.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    string a = "", snake="";
	    cin >>a;
	    for(int i=0; i<n; i++){
	        if(a[i]=='H' || a[i]=='T'){
	            snake += a[i];
	        }
	    }
	    bool flag = true;
	    if(snake.size() % 2 !=0){
	        flag = false;
	    }
	    
	    for(int i=0; i<snake.size(); i++){
	        if(snake[0] == 'T'){
	            flag = false;
	            break;
	        }
	        else if(snake[i] == snake[i+1]){
	            flag = false;
	        }
	    }
	    
	    if(flag){
	        cout <<"Valid" <<endl;
	    }else{
	        cout <<"Invalid" <<endl;
	    }
	}
	return 0;
}
