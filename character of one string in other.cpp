#include<iostream>
#include<map>
using namespace std;
int main(){
	string s1;
	string s2="kpk";
	int i;
	map<int,int>m;
	map<int,int>::iterator it;
	for(i=0;i<s2.size();i++){
		it=m.find(s2[i]);
		if(it!=m.end()){
			it->second=(it->second)+1;
		}
		else
		m.insert({
			s2[i],1
			
		});
	}
	 s1="p";
	for(i=0;i<s1.size();i++){
		it=m.find(s1[i]);
		if(it!=m.end()){
			cout<<s1[i]<<" "<<it->second;
		}
	}
	return 0;
}