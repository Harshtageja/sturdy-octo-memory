#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		1,2,0,7,2,0,2,2
	};
	int prev=INT_MIN;
	int i,flag=0,res=0;
	for(i=0;i<8;i++){
		if(a[i]>prev){
			prev=a[i];
			flag=1;
		}
		if(i<7&&a[i]>a[i+1]&&flag==1){
			res++;
		}
		else if(flag==1&&i==7){
			 res++;
		}
		flag=0;
	}
	cout<<res;
	return 0;
}