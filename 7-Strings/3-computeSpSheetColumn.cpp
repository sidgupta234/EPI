// A function which converts a spreadsheet column id to the corresponding integer, with "A" corresponding to 1. For eg,
//"A" corresponds to 1 "AA" to 27 and "ZZ" to 702.
// Solution is basically converting a string representing a base-26 number to the corresponding integer.
#include <bits/stdc++.h>
using namespace std;

int idToInteger(string id);

int main(){
	
	string k;
	cin>>k;
	cout<<idToInteger(k)<<endl;

	cout<<idToInteger("ZZ");
	return 0;
}

int idToInteger(string id){

	int ans=0;

	for (int i = 0; i < id.length(); ++i){
		ans = ans*26 + id[i] - 'A' +1;
	}
 
	return ans;
}
