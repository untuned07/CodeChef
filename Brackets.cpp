// Codechef Problem: https://www.codechef.com/problems/BRACKETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int maxi=0;
        int tmax=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                maxi++;
            }
            else{
                maxi--;
            }
            tmax=max(maxi,tmax);
        }
        for(int i=0;i<tmax;i++){
            cout<<'(';
        }
        for(int i=0;i<tmax;i++){
            cout<<')';
        }
        cout<<endl;
    }
	return 0;
}
