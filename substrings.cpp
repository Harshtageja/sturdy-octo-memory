#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void substring(string s,string ans,int k){
	if(k==s.size()){
		return;
	}
	int i;
	for(i=k;i<s.size();i++){
		ans.push_back(s[i]);
		cout<<ans<<"\n";
		substring(s,ans,i+1);
		ans.pop_back();
	}
}
int main(){
	string s="abc";
	substring(s,"",0);
	return 0;
}