#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<map>
using namespace std;
int main(){
	map<int,int>m;
	
	map<int,int>::iterator it;
	int a[]={
		2,3,4,5,16,20
	};
	int i,c;
	for(i=0;i<6;i++){
		c=a[i];
		it=m.find(c);
		if(it!=m.end()){
			it->second=(it->second)+1;
		}
		else{
			c=a[i];
			m.insert({
				c,1
			});
		}
	}
	for(i=0;i<6;i++){
		c=a[i]*a[i];
		it=m.find(c);
		if(it!=m.end()){
			cout<<a[i];
		}
	}
	return 0;
}