#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		1,1,1,2,2,2,3
	};
	int i;
	int x=0;
	for(i=0;i<6;i++){
		x=a[i]^x;
	}
	cout<<"Unique is "<<x<<"\n";
	int j=0;
	while(((1<<j)&x)==0){
		j++;
	}
	int y=0;
	for(i=0;i<6;i++){
		if(((i<<j)&a[i])){
			y=y^a[i];
		}
	}
	int b[5]={
		0
	};
	cout<<y<<" "<<(y^x)<<"\n";
	for(j=0;j<5;j++){
		int c=0;
		for(i=0;i<7;i++){
			if((a[i]&(1<<j))){
				c++;
				
			}
		}
		b[j]=c;
	}
	int k=0;
	for(j=0;j<5;j++){
		b[j]=b[j]%3;
		k+=(pow(2,j)*b[j]);
		cout<<b[j];
	}
	cout<<k;
	return 0;
}