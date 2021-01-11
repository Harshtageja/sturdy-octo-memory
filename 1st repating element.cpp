#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	vector<int>a={
		1,5,3,4,3,5,6
	};
	int b[1000];
	int i;
	int k=INT_MAX;
	for(i=0;i<a.size();i++){
		if(b[a[i]]==0)
		b[a[i]]=i;
		else{
			k=min(k,b[a[i]]);
		}
	}
	cout<<k;
	
	return 0;
}