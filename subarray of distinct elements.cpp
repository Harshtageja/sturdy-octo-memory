#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int>m;
	int i;
	int a[]={
		3,3,1,1
	};
	for(i=0;i<4;i++){
		m[a[i]]++;
	}
	map<int,int>::iterator it;
	it=m.begin();
	int s=4;
	while(it!=m.end()){
		if(it->second>1){
			s+=(it->second-1);
		}
		it++;
	}
	cout<<s;
	return 0;
}