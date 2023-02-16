// Codechef Problem: https://www.codechef.com/submit/DISTINCTCOL


#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--){
        int n, maxn =INT_MIN;
        cin >>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >>a[i];

            maxn = max(maxn, a[i]);
        }
        cout <<maxn <<endl;
    }
    
    return 0;
}