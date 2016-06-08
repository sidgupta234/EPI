//Weight is the number of 1's in the bit representation of a number.

#include <bits/stdc++.h>
using namespace std;

int closestSameBitCount(int closestCountOf);
int sizeOfInt=sizeof(int)*8;

int main(){
	int closestCountOf;
	cin>>closestCountOf;
	cout<<closestSameBitCount(closestCountOf)<<endl;
	return 0;
}

int closestSameBitCount(int closestCountOf){
	for(int i=0;i<(1<<(sizeOfInt-2));i++){
		if( (  ( closestCountOf>>i )&1 )!= (  (closestCountOf>>(i+1))&1 ) ){
			closestCountOf^=(1<<i | 1<<(i+1));
			return closestCountOf;
		}
	}
}
