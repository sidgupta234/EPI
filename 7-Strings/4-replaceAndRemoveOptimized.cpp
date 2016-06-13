// apply 2 rules to the given string. Replace 'a' by 2 'd's and delete each entry containing b

#include<bits/stdc++.h>
using namespace std;

string betterApproach(string s);

int main(){
	
	string s;
	cin>>s;
	cout<<betterApproach(s)<<endl;
	return 0;
}


string betterApproach (string s){
	int writeInd=0, countOfA=0, countOfB=0;

	for (int i = 0; i<s.length();i++){
		
		if (s[i]!='b'){
			s[writeInd]=s[i];
			writeInd++;
		}

		else
			countOfB++;

		if(s[i]=='a'){
			countOfA++;
		}

	}

	s.resize(s.length()-countOfB);
	
	int prevLengthOfs=s.length();

	s.resize(countOfA+prevLengthOfs);
	writeInd = s.length()-1;

	for(int i=prevLengthOfs-1;i>=0;i--){
		if(s[i]=='a'){
			
			s[writeInd]='d';
			writeInd--;
			
			s[writeInd]='d';
			writeInd--;
		}

		else{
			s[writeInd]=s[i];
			writeInd--;
		}
	}
	return s;
}
