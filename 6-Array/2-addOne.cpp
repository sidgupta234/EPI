// Write a program which takes as inpit an array of digits encoding a decimal number D and updates the array to represent the number D +1.
// Example <1,2,9> -> <1,3,0>

#include <bits/stdc++.h>
using namespace std;

void incrementArbitPrecisionNumb(vector<int> &v);

int main(){
	vector <int> v;
	
	int a[]={9,9,9};
	v.insert(v.end(), a, a+sizeof(a)/sizeof(a[0]));
	
	incrementArbitPrecisionNumb(v);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	
	return 0;
}

void incrementArbitPrecisionNumb(vector<int> &v){
	v.back()++;
	
	for(int i=v.size()-1;i>0 && v[i]==10 ;i--){
		v[i]=0;
		v[i-1]++;
	}

	if(v[0]==10){
		v[0]=1;
		v.push_back(0);
	}
}
