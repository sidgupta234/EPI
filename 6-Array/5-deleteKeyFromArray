// Given a key and array, return an array without the key.

#include <bits/stdc++.h>
using namespace std;

int deleteAKey(vector <int> &values, int key);

int main(){
	vector <int> values;
	int a[]={1,3,5,4,5,7,8,3,3,3,9,3};
	int key=3;
	values.insert(values.end(), a, a+sizeof(a)/sizeof(a[0]));
	
	int numberOfElementsLeft=deleteAKey(values,key);
	
	for(int i=0;i<numberOfElementsLeft;i++){
		cout<<values[i]<<' ';
	}
	
	return 0;
}

int deleteAKey(vector <int> &values, int key){
	int writeIndex=0;
	
	for(int i=0;i<values.size();i++){
		if(values[i]!=key){
			values[writeIndex]=values[i];
			writeIndex++;
		}
	}

	return writeIndex;
}
