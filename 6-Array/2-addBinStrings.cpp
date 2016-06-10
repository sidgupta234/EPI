// Given two binary strings, return a string of their sum.
#include <bits/stdc++.h>
using namespace std;

string sumOfStrings(string a, string b);
int main(){
	string a="111";
	string b="111111";
	string temp="";

	if(a.length()<b.length()){
		temp=a;
		a=b;
		b=temp;
	}

	cout<<sumOfStrings(a,b)<<endl;
	return 0;
}

string sumOfStrings(string a, string b){
	int carry=0, sum=0, num1, num2;
	string answer="";

	for(int i=a.length()-1, j=b.length()-1;i>=0;i--,j--){
		num1=a[i]-48;

		if(j<0)				//padding 0's to the left of the value with less number of bits.
			num2=0;

		else
			num2=b[j]-48;	//48 is the ASCII for '0'

		sum=num1^num2^carry;
		carry=(num1&carry) | (num2&carry) | (num1&num2);
		answer+=sum+48;
	
	}

	if(carry){
		answer+=49; //49 is the ASCII for '1'
	}

	reverse(answer.begin(),answer.end());
	
	return answer;
}
