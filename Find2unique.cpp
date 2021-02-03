#include<iostream>
using namespace std;
int unique(int a[],int n){
	int i,xors=0;
	for(i=0;i<n;i++){
		xors^=a[i];
	}
	int y=xors;
	int pos=-1;
	int setbit=0;
	while(setbit!=1){
		setbit=xors&1;
		pos++;
		xors=(xors>>1);
	}
	int x=0;
	for(i=0;i<n;i++){
		if((a[i]&(1<<pos))){
			x^=a[i];
		}
	}
	cout<<x;
	return x^y;
}
int main(){
	int a[]={
		2,4,6,7,4,5,6,2
	};
	cout<<unique(a,8);
	return 0;
}