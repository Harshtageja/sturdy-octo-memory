#include<iostream>
using namespace std;
int findunique(int a[],int n){
	int xors=0;
	int i;
	for(i=0;i<n;i++){
		xors^=a[i];
	}
	return xors;
}
int main(){
	int a[]={
		2,4,6,3,4,6,2
	};
	cout<<findunique(a,7);
	return 0;
}