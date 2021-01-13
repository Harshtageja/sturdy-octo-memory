#include<iostream>
using namespace std;
int main(){
	int a[]={
		0,-9,1,3,-4,5
	};
	int i;
	int b[6]={
		0
	};
	for(i=0;i<6;i++){
		if(a[i]>=0){
			b[a[i]]=5;
		}
	}
	for(i=0;i<6;i++){
		if(b[i]==0){
			cout<<i;
			break;
		}
	}
	return 0;
}