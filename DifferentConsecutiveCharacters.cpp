// Codechef Problem: https://www.codechef.com/problems/DIFFCONSEC

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >>t;
    while(t--){
        string s;
        // cin >>s;
        int n;
        cin >>n;
        cin >>s;
        int count =0;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        cout <<count <<endl;
        
    }
	return 0;
}
