#include <bits/stdc++.h>

using namespace std;

int reverseOfDecimalNumber(int reverseOf);

int main(){
	int reverseOf=-324232;
	cout<<reverseOfDecimalNumber(reverseOf);
	return 0;
}

int reverseOfDecimalNumber(int reverseOf){
	int ans=0;
	bool isNegative=(reverseOf<0);
	reverseOf=abs(reverseOf);

	while(reverseOf){
		ans=ans*10+reverseOf%10;
		reverseOf/=10;
	}
	return ( isNegative ? -ans : ans);
}
