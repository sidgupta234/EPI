// Write a program which takes as inpit an array of digits encoding a decimal number D and updates the array to represent the number D +1.
// Example <1,2,9> -> <1,3,0>

#include <bits/stdc++.h>
using namespace std;

void incNumBrute(vector<int> &v);

int main(){
	vector <int> v;
	int a[]={9,9,9};
	v.insert(v.end(), a, a+sizeof(a)/sizeof(a[0]));
	incNumBrute(v);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	
	return 0;
}

void incNumBrute(vector<int> &v){
	int ans=0;
	int len=v.size();
	
	for(int i=0;i<v.size();i++){
		ans=ans*10+v[i];
	}
	ans++;

	if((int)(log10(ans)+1)>v.size()){
		v.insert(v.end(),0);
	}

	for(int i=v.size()-1;i>=0;i--){
		v[i]=ans%10;
		ans=ans/10;
	}
}
