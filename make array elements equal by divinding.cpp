#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int,greater<int>>m={
		
	};
	map<int,int>::iterator it;
	int i;
	int a[]={
		4,2,2,8
	};
	for(i=0;i<4;i++){
		int res=a[i];
		while(res){
			m[res]++;
			res/=2;
		}
	}
	int mx;
	it=m.begin();
	for(it=m.begin();it!=m.end();it++){
		if(it->second==4){
			mx=it->first;
			break;
		}
	}
	int ans=0;
	for(i=0;i<4;i++){
		int r=a[i];
		while(r!=mx){
			ans++;
			r/=2;
		}
	}
	cout<<ans;
	return 0;
}