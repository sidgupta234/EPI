#include <bits/stdc++.h>
using namespace std;
int sizeOfInt=sizeof(int)*8;
int Table[70000];

void precompute(void);
int parity(int ParityOf);
int parityAns(int ParityOf, int BitMask, int wordSize);


int main(){
//freopen("output_file_name.out","w",stdout);    
    precompute();
	int ParityOf;
	int wordSize =sizeOfInt/4;
	int BitMask =int(pow(2,(sizeOfInt/4))-1);
	cin>>ParityOf;
	cout<<parityAns(i, BitMask, wordSize)<<endl;
/*	for(int i=0;i<=INT_MAX;i++){
		cout<<i<<' '<<parityAns(i, BitMask, wordSize)<<endl;
	}
*/	
	return 0;
}

int parity(int ParityOf){
	int factorOfShift = sizeOfInt/2;

	while(factorOfShift){
		ParityOf^=(ParityOf>>factorOfShift);
		factorOfShift=factorOfShift/2;
	}

	return ParityOf & 0x1;
}

void precompute (void){
	for (int i=0;i<=int(pow(2,(sizeOfInt/4))-1);i++){
		Table[i]=parity(i);
		//cout<<i<<' '<<Table[i]<<endl; Uncomment this to check for yourself
	}
	return ;
}

int parityAns( int ParityOf, int BitMask, int wordSize){
	return ( Table [ParityOf>>( 3 * wordSize)]
	^ Table[( ParityOf >>  ( 2 * wordSize ) ) & BitMask]
	^ Table[( ParityOf >> ( wordSize ) ) & BitMask]
	^ Table[ ParityOf & BitMask] );
}
