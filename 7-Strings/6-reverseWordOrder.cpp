// Reverse all the words in a sentence
//Eg. Alice likes me -> me likes Alice

#include <bits/stdc++.h>
using namespace std;

string reverseStringButNotWord(string s);

int main(){
	string s;
	getline(cin, s);
	cout<<reverseStringButNotWord(s)<<endl;
	return 0;
}

string reverseStringButNotWord(string s){
	string ans="";
	
	int j = s.length()-1;
	
	for (int i = s.length()-1; i >=0 ; i--){
		
		while(!isspace(s[i]) && i>=0){	
			i--;
		}

		if(i>=-1){
			ans+=s.substr(i+1,j-i+1)+' ';
			j=i-2;
			i=i-1;
		}

	}

	return ans;
}
