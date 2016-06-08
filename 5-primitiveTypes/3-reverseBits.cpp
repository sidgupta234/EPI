#include <bits/stdc++.h>
using namespace std;

int sizeOfInt=sizeof(int)*8;
int Table[70000];

void precompute(void);
int reverseBits(int num);
int bitSwap(int num, int i, int j);
int reverseBitsUsingTable(int reverseOf, int wordSize, int bitMask);

int main(){
    precompute();
	int wordSize =sizeOfInt/4;
	int reverseOf;
	int bitMask =int(pow(2,(sizeOfInt/4))-1);
	cin>>reverseOf;
	cout<<reverseBitsUsingTable(reverseOf, wordSize, bitMask)<<endl;
	return 0;
}


void precompute (void){
	for (int i=0;i<=int(pow(2,(sizeOfInt/4))-1);i++){
		Table[i]=reverseBits(i);
	//	cout<<i<<' '<<Table[i]<<endl;
	}
	
	return ;
}

int reverseBits(int num){
	if(num!=0){
		int noOfBits=log2(num)+1;
		for(int i=0, j=noOfBits-1; i<j ; i++,j--){
			num=bitSwap(num,i,j);
		}
	}
	return num;
}

int bitSwap(int num, int i, int j){
	if( ( ( num>>i ) & 1 ) != ( ( num>>j ) & 1 ) ){
		int bitMask = (1<<i) | (1<<j);
		num ^=bitMask;
	}	
	return num;
}

int reverseBitsUsingTable(int reverseOf, int wordSize, int bitMask){
	if(reverseOf<(1<<sizeOfInt/4))
		return Table[reverseOf];

	if(reverseOf<(1<<2*sizeOfInt/4))
		return  Table[(reverseOf >> (wordSize))&bitMask] |
				Table[(reverseOf & bitMask)]<<(wordSize);

	if(reverseOf<(1<<3*sizeOfInt/4))
		return Table[(reverseOf >> (2*wordSize))&bitMask] |
		Table[(reverseOf >> (wordSize))&bitMask]<<(wordSize) |
		Table[(reverseOf & bitMask)]<<(2*wordSize);

	return  Table[((reverseOf >> (3*wordSize)))&bitMask] | 
	Table[(reverseOf >> (2*wordSize))&bitMask]<<(wordSize) |
	Table[(reverseOf >> (wordSize))&bitMask]<<(2*wordSize) |
	Table[(reverseOf & bitMask)]<<(3*wordSize);

}
