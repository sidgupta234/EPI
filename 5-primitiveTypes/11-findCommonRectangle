#include <bits/stdc++.h>
using namespace std;

struct  rectangle{
	int x, y, length, height;
};

bool isIntersect(struct  rectangle A, rectangle B);
rectangle computeCommonRectangle(struct rectangle A, struct rectangle B);

int main(){
	rectangle A,B,C ;
	A.x=0, A.y=0, A.length=1, A.height=1;
	B.x=2, B.y=5, B.length=15, B.height=4;
	C=computeCommonRectangle(A,B);
	cout<<C.x<<' '<<C.y<<' '<<C.length<<' '<<C.height<<endl;
	return 0; 
}

rectangle computeCommonRectangle(struct rectangle A, struct rectangle B){
	rectangle C;
	
	if(isIntersect(A,B)){
		C.x=max(A.x, B.x);
		C.y=max(A.y, B.y);
		C.length=min(A.x+A.length, B.x+B.length)-max(A.x,B.x);
		C.height=min(A.y+A.height, B.y+B.height)-max(A.y,B.y);
	}
	else {
		C.x=0, C.y=0, C.length=-1, C.height=-1;
	}
	return C;
}

bool isIntersect(struct rectangle A, struct rectangle B){
	return A.x<=B.x+B.length && 
			A.y<=B.y+B.length && 
			B.x<=A.x+A.length && 
			B.y<=A.y+A.length;
}
