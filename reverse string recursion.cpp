#include<iostream>
using namespace std;
string reverseit(string &s,int i){
	int m=s.size();
	int n=m-1-i;
	if(i>m/2){
		return s;
	}
	swap(s[i],s[n]);
	s=reverseit(s,i+1);
	return s;
}
int main(){
	string s="binod";
	s=reverseit(s,0);
	cout<<s;
	return 0;
}