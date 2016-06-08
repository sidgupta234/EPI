#include <bits/stdc++.h>

using namespace std;

int sizeOfint=sizeof(int)*8;

double power(double x, int y){
	double result = 1.0;
	int power=y;
	
	while(power){
		if(power&1){
			result*=x;
			power--;
		}
		power>>=1;
		x*=x;
	}
	return result;
}

int main(){
	int x=3, y=6;
	cout<<power(x,y);
	return 0;
}
