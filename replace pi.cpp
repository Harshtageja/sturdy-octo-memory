#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string rep(string s){
	size_t i=s.find("pi");
	if(i!=string::npos){
		s.replace(i,2,"3.14");
	}
	else{
		return s;
	}
	s=rep(s);
	return s;
}
int main(){
	string s="pippppi";
	s=rep(s);
	cout<<s;
	return 0;
}