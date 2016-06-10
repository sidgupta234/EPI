// program takes an array of n integers, where A[i] denotes the maximum you can advance from index i,
//and returns whether it is possible to advance to the last index starting from the begining of the array

#include <bits/stdc++.h>
using namespace std;

bool isAdvancePossible(vector <int> &values);

int main(){
	 vector<int> values;
	int arr[]={3, 2, 0, 0, 2, 0, 1};
	values.insert (values.end(), arr, arr+sizeof(arr) / sizeof(arr[0]) ) ;
	cout<< ( isAdvancePossible(values)? "Yes we can reach Rome" :"Sorry, not today." ) <<endl;
}

bool isAdvancePossible(vector <int> &values){
	int canGoTill=0;
		
	for(int i=0;i<values.size() && i<=canGoTill;i++){
		canGoTill=max(canGoTill, i+values[i]);
	}

	return canGoTill>=values.size()-1;
}
