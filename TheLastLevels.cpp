// Codechef Problem: https://www.codechef.com/problems/LASTLEVELS

#include <iostream>
using namespace std;

int main(){
    // your code goes here
    int t, x, y, z;
    cin >> t;
    int n;
    while (t--){
        cin >> x >> y >> z;
        if (x <= 3){
            cout << x * y << endl;
        }else if (x % 3 != 0){
            n = x / 3 * z;
            cout << (x * y) + n << endl;
        }else if (x % 3 == 0){
            n = x / 3 - 1;
            n = n * z;
            cout << x * y + n << endl;
        }
    }
    return 0;
}
