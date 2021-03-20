#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		8,4,4,16
	};
	map<int,int,greater<int>>mp;
	map<int,int>::iterator it;
	int i,r;
	for(i=0;i<4;i++){
		int r=a[i];
		while(r){
			mp[r]++;
			r/=2;
		}
	}
	int mx;
	for(it=mp.begin();it!=mp.end();it++){
		if(it->second==4){
			mx=it->first;
			break;
		}
	}
	int c=0;
	for(i=0;i<4;i++){
		r=a[i];
		while(r!=mx){
			c++;
			r/=2;
		}
	}
	cout<<c;
	return 0;
}