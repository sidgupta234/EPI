#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int num);

int main(){
	int num=1234554321;
	cout<< (isPalindrome(num) ? "Num is Palindrome" : "Num is not a Palindrome")<<endl;
}

bool isPalindrome(int num){
	int val=num;
	int length = log10(num)+1;
	int msb,lsb;
		
	for(int i=0;i< (int)( (log10(val)+1)/2) ;i++){
		
		msb=num/((int)(pow(10,length-1)));
		lsb=num%10;
		//cout<<num<<' '<<msb<<' '<<lsb<<endl;
		if(msb!=lsb)
			return false;
		
		num=num-msb*pow(10,length-1);
		num=num/10;
		length=length-2;
	}
	return true;
}
