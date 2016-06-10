#include <bits/stdc++.h>
using namespace std;

int deleteDuplicatesFromSortedArray(vector <int> &values);

int main(){
	vector <int> values;
	int a[]={2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5};
	
	values.insert(values.end(), a, a+sizeof(a)/sizeof(a[0]));
	int numOfValues=deleteDuplicatesFromSortedArray(values);

	for(int i=0;i<numOfValues;i++){
		cout<<values[i]<<' ';
	}

	return 0;
}

int deleteDuplicatesFromSortedArray(vector <int> &values){
	int writeIndex =1, repeats=0;

	for(int i=1;i<values.size();i++){
		
		if(values[i]!=values[i-1]){
			values[writeIndex]=values[i];
			writeIndex++;
		}
	}
	return writeIndex;	
}
