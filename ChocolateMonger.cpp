// Codechef Problem: https://www.codechef.com/LP1TO205/problems/CM164364

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x;
	    cin >>n >>x;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	    }
	    int c = 0;
	    
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i+1]!=a[i])
	        c++;
	    }
	    if(n-x>=c)
	    cout<<c<<endl;
	    else
	    cout<<n-x<<endl;
	}
	return 0;
}
