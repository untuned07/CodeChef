// Codechef Problem: https://www.codechef.com/LP1TO205/problems/MATCHES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	//My Approach:
	/*
	int t;
	cin >>t;
	while(t--){
	    int a, b;
	    cin >>a >>b;
	    int sum = a+b;
	    int count =0;
	    while(sum != 0){
	        int digit = sum%10;
	        switch(digit){
	            case 0:
	                count+=6;
	                sum = sum/10;
	                break;
	            case 1:
	                count+=2;
	                sum = sum/10;
	                break;
	            case 2:
	                count+=5;
	                sum = sum/10;
	                break;
	            case 3:
	                count+=5;
	                sum = sum/10;
	                break;
	            case 4:
	                count+=4;
	                sum = sum/10;
	                break;
	            case 5:
	                count+=5;
	                sum = sum/10;
	                break;
	            case 6:
	                count+=6;
	                sum = sum/10;
	                break;
	            case 7:
	                count+=3;
	                sum = sum/10;
	                break;
	            case 8:
	                count+=7;
	                sum = sum/10;
	                break;
	            case 9:
	                count+=2;
	                sum = sum/10;
	                break;
	        }
	    }
	    cout <<count <<endl;
	}
	*/
	
// 	Referenced Approach:
    int match[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    cin >>t;
    while(t--){
        int a, b;
        cin >>a >>b;
        int sum=0;
        int c = a+b;
        while(c > 0){
            int digit = c%10;
            sum = sum + match[digit];
            c = c/10;
        }
        cout <<sum <<endl;
    }
	return 0;
}
