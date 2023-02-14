// Codechef Problem: https://www.codechef.com/problems/CNDY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int a[n*2];
        for(int i=0; i <2*n; i++){
            cin >>a[i];
        }

        int count = 0;
        for(int i=0; i<2*n; i++){
            count = 0;
            for(int j=i; j<2*n; j++){
                if(a[i] == a[j]){
                    count++;
                }
            }
            if(count == 3){
                cout <<"No" <<endl;
                break;
            }
        }
        if(count <3){
            cout <<"Yes" <<endl;
        }
    }
	return 0;
}
