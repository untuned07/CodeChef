// Codechef Problem: https://www.codechef.com/LP1TO205/problems/SIMPSTAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, k;
	    cin >>n >>k;
	    vector <int> arr;
	    int temp;
	    for(int i=0; i<n; i++){
	        cin >>temp;
	        arr.push_back(temp);
	    }
	    vector <int> solution;
	    double sum = 0;
	    sort(arr.begin(), arr.end());
	   // for(int i: arr){
	       // std::cout <<i <<"\t";
	   // }
	    for(int i=k; i<n-k; i++){
	        solution.push_back(arr[i]);
	        sum += arr[i];
	    }
	    double avg = 0.000000;
	    avg = sum / (n-(2*k));
	    std::cout <<fixed <<avg <<std::endl;
	}
	return 0;
}
