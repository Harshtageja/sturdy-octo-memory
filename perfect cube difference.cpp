#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
bool pc(int n){
	map<int,int>m;
	int i;
	for(i=1;(i*i*i)-(i-1)*(i-1)*(i-1)<=n;i++){
		m.insert({
			i*i*i,1
		});
		
	}
	map<int,int>::iterator it;
	it=m.begin();
	int k;
	while(it!=m.end()){
		k=it->first;
		k+=n;
		if(m.find(k)!=m.end()){
			cout<<it->first<<" "<<k;
			return true;
		}
	}
	return false;
}
int main(){
	pc(124);
	
	return 0;
}