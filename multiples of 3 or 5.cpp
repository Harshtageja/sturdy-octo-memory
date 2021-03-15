#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,s;
	int i,j;
	for(i=0;i<t;i++){
		cin>>n;
		s=0;
		for(j=1;j<n;j++){
			if(j%3==0){
				s+=j;
			}
			if(j%5==0){
				s+=j;
			}
			if(j%15==0){
				s-=j;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}