#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int>mp{
		
	};
	map<int,int>::iterator it;
	int a[]={
		2,3,2,4,5,5,7,4
	};
	int i;
	int k=2;
	int u=0;
	for(i=0;i<8;i++){
		mp[a[i]]++;
	}
	it=mp.begin();
	while(it!=mp.end()){
		if(it->second>1){
			mp[(it->first)+k]++;
		}
		it++;
	}
	cout<<mp.size();
	return 0;
}