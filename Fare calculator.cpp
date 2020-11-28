#include<vector>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int minm(int a,int b){
	if(a==INT_MAX&&b==INT_MAX){
		return INT_MAX;
	}
}
int main(){
	int a[4][4]={
		{20000,50,10,20000},
		{
			20000,20000,20000,20000
		},
		{
			20000,20000,20000,10
		},
		{
			20000,10,20000,20000
		}
		
	};
	int i,j,k;
	
	
	for(k=0;k<4;k++){
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				//cout<<minm(a[i][j],a[i][k]+a[k][j]);
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	vector<int>h;
	int min=a[0][1];
	int max=0;
	int pic;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(a[j][1]<min&&a[j][1]>max&&a[0][1]==a[j][1]+a[0][j]){
				max=a[j][1];
				pic=j;
			}
		}
		min=max;
		if(max!=0)
		h.push_back(pic);
		max=0;
	}
	for(i=0;i<h.size();i++){
		cout<<h[i];
	}
	return 0;
}
