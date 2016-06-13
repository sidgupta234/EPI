#include <bits/stdc++.h>

using namespace std;

string makeLower(string s);
bool isPalin(string s);

int main(){
	string s;
	getline(cin,s);
	cout<<isPalin(s)<<endl;
	return 0;
}

string makeLower(string s){
	string s2="";
	
	for (int i = 0; i < s.length(); ++i){
		
		if(s[i]>='A' && s[i]<='Z'){
			s2+=(s[i]+32);
		}

		if(s[i]>='a' && s[i]<='z'){
			s2+=s[i];
		}

		if(s[i]>='0' && s[i]<='9'){
			s2+=s[i];
		}
	}
	return s2;
}

bool isPalin(string s){
	s=makeLower(s);
	bool ans=true;
	
	for (int i = 0, j=s.length()-1; i <j ; i++,j--){
	
		if(s[i]!=s[j]){
			ans=false;
			break;
		}
	}
	
	return ans;
}
