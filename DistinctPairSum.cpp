// Codechef Problem : https://www.codechef.com/LP1TO201/problems/MANYSUMS

#include <iostream>

int main(){
    int t;
    std::cin >>t;
    while(t--){
        int l, r;
        std::cin >>l >>r;
        std::cout<<(2*r)-(2*l)+1 <<std::endl;
    }
    return 0;
}