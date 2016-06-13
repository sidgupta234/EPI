// The sequence starts with 1. Subsequent numbers are derived by describing the previous numbers in terms of consecutive digits.
// The sequence would be 1(one), 11(one one), 21 (two ones), 1211 (one two one one), 111221 (one one one two two one) and so on ...
// to_string is present only after c++11
#include <bits/stdc++.h>

using namespace std;

string lookAndSay(int n);
string lookAndSay2(string s);

int main(){
	
	int n;
	cin>>n;
	cout<<lookAndSay(n)<<endl;
}

string lookAndSay(int n){
	string ans="";
	ans+="1";

	for(int i=2;i<=n;i++){
		ans=lookAndSay2(ans);
	}

	return ans;

}

string lookAndSay2(string s){
	string ans="";

	for (int i = 0; i < s.length(); ++i){
		
		int count = 1;

		while(s[i+1]==s[i] && i<s.length()-1){
			i++;
			count++;
		}

		ans+=to_string(count)+s[i];

	}
	return ans;
}
