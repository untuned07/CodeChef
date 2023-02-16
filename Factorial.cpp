// Codechef Probelm: https://www.codechef.com/problems/FCTRL

/*

Problem
The most important part of a GSM network is so called Base Transceiver Station (BTS). These transceivers form the areas called cells (this term gave the name to the cellular phone) and every phone connects to the BTS with the strongest signal (in a little simplified view). Of course, BTSes need some attention and technicians need to check their function periodically.

The technicians faced a very interesting problem recently. Given a set of BTSes to visit, they needed to find the shortest path to visit all of the given points and return back to the central company building. Programmers have spent several months studying this problem but with no results. They were unable to find the solution fast enough. After a long time, one of the programmers found this problem in a conference article. Unfortunately, he found that the problem is so called "Traveling Salesman Problem" and it is very hard to solve. If we have NN BTSes to be visited, we can visit them in any order, giving us N! possibilities to examine. The function expressing that number is called factorial and can be computed as a product:

1.2.3.4....N. The number is very high even for a relatively small N.

The programmers understood they had no chance to solve the problem. But because they have already received the research grant from the government, they needed to continue with their studies and produce at least some results. So they started to study behaviour of the factorial function.

For example, they defined the function ZZ. For any positive integer NN, ZZ(NN) is the number of zeros at the end of the decimal form of number N!N!. They noticed that this function never decreases. If we have two numbers N1<N2 then Z(N1) <= Z(N2). It is because we can never "lose" any trailing zero by multiplying by any positive number. We can only get new and new zeros. The function ZZ is very interesting, so we need a computer program that can determine its value efficiently.

Input:
There is a single positive integer TT on the first line of input (equal to about 100000100000). It stands for the number of numbers to follow. Then there are T lines, each containing exactly one positive integer number N, 1 ≤ N ≤ 10^9.
Output:
For every number N, output a single line containing the single non-negative integer Z(N)Z(N).

Sample 1:
Input
6
3
60
100
1024
23456
8735373

Output
0
14
24
253
5861
2183837

*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n;
	cin >>t;
	while(t--){
	    cin >>n;
	    int count =0;
	    int z = 5;
	    while(n/z != 0){
	        count += (n/z);
	        z *=5;
	    }
	    cout <<count <<endl;
	}
	return 0;
}
