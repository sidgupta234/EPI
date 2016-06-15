// To Generate a random number between a given range.

#include <bits/stdc++.h>

using namespace std;

int randomGenerator(int low, int high);
int ZeroOneRandom();

int main(){
	srand( time(NULL) );
	int low, high;
	cin>>low>>high;
	cout<<randomGenerator(low, high)<<endl;
	return 0;
}

int randomGenerator(int low, int high){
	int range = high - low + 1, result;
	do{
		result= 0;
		for (int i=0; (1<<i) < range ; i++){
			result = (result << 1) | ZeroOneRandom();
		}

	}while(result>=range);
		
	return result + low;
}

int ZeroOneRandom(){
	return rand()%2;
}
