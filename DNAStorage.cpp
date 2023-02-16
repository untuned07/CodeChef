// Codechef Problem: https://www.codechef.com/problems/DNASTORAGE


#include <iostream>
using namespace std;

int main(){
	int t, n;
	cin >>t;
	while(t--){
		cin >>n;
		string str;
		cin >>str;
		for (int i=0; i < n; i+=2){
// 			cin >>str[i] >>str[i+1];
			if (str[i] == '0'){
				if (str[i+1] == '0'){cout <<'A';}
				else{cout <<'T';}
			}else{
				if (str[i+1] == '0'){cout <<'C';}
				else{cout <<'G';}
			}
		}
		cout <<endl;
	}
	return 0;
}