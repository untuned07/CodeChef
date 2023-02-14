// Codechef Problem: https://www.codechef.com/problems/DNASTRAND


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin>>t;
	while (t--){
	    cin >>n;
	    char a[n];
	    for (int i=0; i < n; i++){
	        cin >>a[i];
	    }
	    for (int i=0; i < n; i++){
	        if(a[i] == 'A'){cout <<'T';}
	        else if (a[i] == 'T'){cout <<'A';}
	        else if (a[i] == 'C'){cout <<'G';}
	        else if (a[i] == 'G'){cout <<'C';}
	    }
	    cout <<endl;
	}
	return 0;
}
