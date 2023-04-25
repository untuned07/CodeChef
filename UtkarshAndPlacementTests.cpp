// Codechef Problem: https://www.codechef.com/problems/UTKPLC


// My first solution
/*

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    char f, s, t;
	    cin >>f >>s >>t;
	    char x, y;
	    cin >>x >>y;
	    if(f==x)cout <<x <<endl;
	    else if(f == y)cout <<y <<endl;
	    else if(s == x)cout <<x <<endl;
	    else if(s == y)cout <<y <<endl;
	    else if(t == x)cout <<x <<endl;
	    else if(t == y)cout <<y <<endl;
	}
	return 0;
}

*/




// Just an optimal solution
/*

#include <bits/stdc++.h>
using namespace std;

int main(){
    	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    char f, s, t;
	    cin >>f >>s >>t;
	    char x, y;
	    cin >>x >>y;
	    if(f==x || f== y)cout <<f <<endl;
	    else if(s == x || s==y )cout <<s <<endl;
	    else if(t == x || t==y)cout <<t <<endl;
	}
    return 0;
}

*/




// Perfect solution

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n=3;
        vector <char> v(n);
        // char v[n];
        cin >>v[0] >>v[1] >>v[2];
        char x, y;
        cin >>x >>y;
        for(int i=0; i<n; i++){
            if(v[i] == x){
                cout <<x <<endl;
                break;
            }else if(v[i] == y){
                cout <<y <<endl;
                break;
            }
        }
    }
    return 0;
}