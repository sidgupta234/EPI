// apply 2 rules to the given string. Replace 'a' by 2 'd's and delete each entry containing b.

#include<bits/stdc++.h>
using namespace std;

string bruteReplaceAndRemove(string s);

int main(){
	
	string s;
	cin>>s;
	cout<<bruteReplaceAndRemove(s)<<endl;
	return 0;
}

string bruteReplaceAndRemove(string s){

	int len =s.length();

	for (int i = 0; i < s.length(); ++i){
		if(s[i]=='a'){
			s[i]='d';
			s.insert(s.begin()+i,'d');
		}

		if(s[i]=='b'){
			s.erase(s.begin()+i);
			i--;
		}
				
	}

	return s;
}
