#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	s="53214";
	sort(s.begin(),s.end(),greater<int>());
	int x=stoi(s);
	s=to_string (x);
	cout<<s+'1';
	return 0;
}