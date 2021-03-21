#include<bits/stdc++.h>
using namespace std;
void myfunc(string s,string ans){
	int i;
	int n=s.size();
	if(s.size()==0){
		cout<<ans<<"\n";
		return;
	}
	vector<string>a={
		"I","LOVE","SAM","SUNG","SAMSUNG","LOVES"
	};
	vector<string>::iterator it;
	
	for(i=1;i<=s.size();i++){
		it=find(a.begin(),a.end(),s.substr(0,i));
		if(it!=a.end()){
			//cout<<s.substr(0,i)<<" "<<s<<"\n";
			myfunc(s.substr(i,n-i),ans+s.substr(0,i)+" ");
		}
	}
}
int main(){
	string a="ILOVESAMSUNG";
	myfunc(a,"");
	return 0;
}