#include <bits/stdc++.h>

using namespace std;

int sizeOfint=sizeof(int)*8;

int quotientBrute(int x, int y);
int quotientOptimized(int x, int y);

int main(){
	int x=74, y=15;
	//cin>>x>>y;
	cout<<quotientOptimized(x,y);
	return 0;
}

int quotientBrute(int x, int y){
	int ans=0;

	while(x>y){
		x=x-y;
		ans++;
	}
	return ans;
}

int quotientOptimized(int x, int y){
	int power= sizeOfint, result=0;
	long long int ypowersOf2 = (long long )y<<sizeOfint;
	
	while(x>y){
		while(x<ypowersOf2){
			ypowersOf2=ypowersOf2>>1;
			power--;
		}
		x=x-ypowersOf2;
		result=1<<power;
	}
	return result;
}
