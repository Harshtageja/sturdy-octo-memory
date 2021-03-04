#include<iostream>
#include<vector>
using namespace std;
bool k(int a[5][5],int i,int j,int m,int n,int h[5][5]){
	if(i==m&&j==n){
		return true;
	}
	if(a[i+1][j]!=0){
		if(k(a,i+1,j,m,n,h)){
			h[i+1][j]=1;
			return true;
		}
	}
	 if(a[i][j+1]!=0){
		if(k(a,i,j+1,m,n,h)){
			h[i][j+1]=1;
			return true;
		}
	}
	return false;
}
int main(){
	int a[5][5]={
		{
			1,0,1,0,1
		},
		{
			1,1,1,1,1
		},
		{
			0,1,0,1,0
		},
		{
			1,0,0,1,1
		},
		{
			1,1,1,0,1
		}
	};
	int h[5][5]={
		0
	};
	int i,j;
	k(a,0,0,4,4,h);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<h[i][j];
		}
		cout<<"\n";
	}
	return 0;
}