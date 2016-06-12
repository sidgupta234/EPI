#include <bits/stdc++.h>

using namespace std;

int stringToInt(string s);
string intTostring(int num);

int main(){
	string s="-12345";
	cout<<stringToInt(s)<<endl;
	cout<<intTostring(23456)<<endl;
	return 0;
}

int stringToInt(string s){
	int ans=0;
	
	for(int i=1 ? s[0]=='-' : 0 ;i<s.length();i++){
		ans = ans*10 +s[i]-'0'; 
	}

	return s[0]=='-' ? -ans : ans ;
}

string intTostring(int num){
	string ans = "";

	bool isNeg = num<0;
	num= isNeg ? -num : num;

	while(num){
		ans += num%10 +'0' ;
		num=  num/10;
	}

	if(isNeg)
		ans+='-';

	reverse(ans.begin(), ans.end());
	return ans;

} 
