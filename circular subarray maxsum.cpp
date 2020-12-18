#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		4,-4,6,-6,10,-11,12
	};
	int n=7;
	int i,s=0,maxs=INT_MIN,f=0,maxd;
	for(i=0;i<n;i++){
		s+=a[i];
		if(s<0){
			s=0;
		}
		maxs=max(maxs,s);
		if(i==6&&f==0){
			i=-1;
			f=1;
			n=6;
			maxd=maxs;
		}
	}
	if(maxd*2==maxs){
		cout<<maxd;
	}
	else{
		cout<<maxs;
	}
	return 0;
}