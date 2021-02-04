#include<iostream>
using namespace std;
int unique(int a[],int n){
	int b[20]={
		0
	};
	int i,j;
	for(i=0;i<20;i++){
		int c=0;
		for(j=0;j<n;j++){
			if((a[j]&(1<<i))){
				c++;
			}
		}
		b[i]=c;
	}
	
	int m=0;
	for(i=19;i>-1;i--){
		if(b[i]%3==1){
			m+=(1<<i);
		}
	}
	return m;
}
int main(){
	int a[]={
		1,1,1,20,2,2,2
	};
	cout<<unique(a,7);
	return 0;
}