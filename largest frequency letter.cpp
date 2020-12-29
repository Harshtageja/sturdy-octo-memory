#include<iostream>
using namespace std;
int main()
{
	int a[26]={
		0
	};
	string s="abcacbade";
	int i;
	for(i=0;i<s.size();i++){
		a[s[i]-97]=a[s[i]-97]+1;
	
	}
	int m=0;
	for(i=0;i<26;i++){
		if(a[i]>m){
			m=a[i];
		}
	}
	cout<<m;
	return 0;
}