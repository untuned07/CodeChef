// Codechef Problem: https://www.codechef.com/problems/SUMTRIAN


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >>t;
	while(t--){
	    cin >>n;
	   // int count = 0;
	   int arr[n][n];
	   for (int i = 0; i <n ; i++){
	       for (int j = 0; j <= i; j++){
	           cin >>arr[i][j];
	       }
	   }
	   for (int i = n-2; i >= 0; i--){
	       for (int j= 0; j <= i; j++){
	           if ((arr[i][j] + arr[i + 1][j])>(arr[i][j] + arr[i+1][j+1])){
	               arr[i][j] = arr[i][j] + arr[i+1][j];
	           }else{
	               arr[i][j] = arr[i][j] + arr[i+1][j+ 1];
	           }
	       }
	   }
	       cout <<arr[0][0] <<endl;
	}
	return 0;
}
 