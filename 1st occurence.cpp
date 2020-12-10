#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a={
		1,1,3,4,3,5,6
	};
	vector<int>b;
	int i=0;
	for(i=0;i<8;i++){
		b.push_back(-1);
	}
	int min=INT_MAX;
	for(i=0;i<7;i++){
		if(b[a[i]]<min&&b[a[i]]!=-1){
			min=b[a[i]];
		}
		b[a[i]]=i;
	}
	cout<<min;
	return 0;
}