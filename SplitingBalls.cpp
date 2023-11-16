// Codechef Problem: https://www.codechef.com/NOV221D/problems/SPBALL

#include <iostream>
#include <vector>
using namespace std;

/*
Codechef Says too poor complexity!
Correct it and then upload!
Might delete this file!
*/

int main(){
    int t;
    cin >>t;
    while(t--){
        int n; 
        cin >>n;
        int a[n];
        vector<int> b;
        for(int i=0; i<n; i++){
            cin >>a[i];
        }
        int maxn=0;
        for(int i=0; i<n; i++){
            maxn = max(maxn, a[i]);
        }

        for(int j=1; j<maxn; j++){
            for(int i=0; i<n; i++){
                if(a[i] == 1 && j == 1){
                    b.push_back(1);
                }else if(a[i]>1){
                    for(int k=0; k < a[i]; k++){
                        b.push_back(a[i]-1);
                    } 
                }
            }
        }
        cout <<b.size() <<endl;
    }
    return 0;
}