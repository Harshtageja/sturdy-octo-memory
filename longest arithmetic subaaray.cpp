#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a={
		10,7,4,6,8,10,11
	};
	int i;
	int d=a[1]-a[0];
	int m=INT_MIN;
	int count=2;
	int s=0;
	int e;
	int sm;
	int em;
	
	
	for(i=2;i<a.size();i++){
		if(a[i]-a[i-1]==d){
			count++;
		}
		else{
			e=i-1;
			m=max(m,count);
			if(m==count){
				sm=s;
				em=e;
			}
			count=2;
			s=i-1;
			d=a[i]-a[i-1];
		}
	}
	cout<<sm<<em;
	return 0;
}