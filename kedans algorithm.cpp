#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		1,-4,-5,10,1
	};
	int i,s=0,maxs=INT_MIN;
	for(i=0;i<5;i++){
		s+=a[i];
		if(s<0){
			s=0;
		}
		maxs=max(maxs,s);
	}
	cout<<maxs;
	return 0;
}