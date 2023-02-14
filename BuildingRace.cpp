// Codechef Probelm: https://www.codechef.com/problems/BUILDINGRACE

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i=1; i<=t; i++){
        int a, b, x, y;
        cin >>a >>b >>x >>y;
        if((float)a/x == (float)b/y){
            cout <<"Both" <<endl;
        }else if((float)a/x > (float)b/y){
            cout <<"Chefina" <<endl;
        }else{
            cout <<"Chef" <<endl;
        }
    }
}