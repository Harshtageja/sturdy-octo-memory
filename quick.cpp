#include<iostream>
using namespace std;
int part(int a[],int l,int e){
	int pi=a[e];
	int i=l-1;
	for(int j=l;j<e;j++){
		if(a[j]<pi){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void ins(int a[],int l,int e){
	if(l<e){
		int pi=part(a,l,e);
		ins(a,pi+1,e);
		ins(a,l,pi-1);
	}
}
int main(){
	int a[]={
		5,4,3,2,1
	};
	int i,j;
	ins(a,0,4);
	for (i=0;i<5;i++){
		cout<<a[i];
	}
	return 0;
}