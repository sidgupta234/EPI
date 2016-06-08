//Full Analysis and Solution at https://sidgupta234.wordpress.com/2016/06/08/2-swap-bits/
#include <bits/stdc++.h>
using namespace std;

int bitSwapSuccinct(int num, int i, int j);
int bitSwapBruteForce(int x, int i, int j);

int main(){
	cout<<bitSwap(6,0,2)<<endl;
	cout<<bruteForce(6,0,2)<<endl;
	return 0;
}

int bitSwapSuccinct(int num, int i, int j){
	if( ( ( num>>i ) & 1 ) != ( ( num>>j ) & 1 ) ){
		int bitMask = (1<<i) | (1<<j);
		num ^=bitMask;

	}	
	return num;
}

int bitSwapBruteForce(int x, int i, int j){
	int temp1= ((x & (1<<i)) !=0);
	int temp2= ((x & (1<<j)) !=0);
	x = temp1==1 ? (x | ( temp1<<j) ) : (x & ~(1<<j));
	x = temp2==1 ? (x | ( temp2<<i) ) : (x & ~(1<<i));
	return x;
}
