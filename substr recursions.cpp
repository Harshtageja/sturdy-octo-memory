#include<iostream>
using namespace std;
void subseq(string s,string ans){
	if(s.size()==0){
		cout<<ans<<"\n";
		return;
	}
	char ch=s[0];
	string ros=s.substr(1);
	subseq(ros,ans);
	subseq(ros,ch+ans);
}
int main(){
	string s="abc";
	
	subseq(s,"");
	return 0;
}