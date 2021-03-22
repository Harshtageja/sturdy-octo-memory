#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,multiset<int,greater<int>>>m;
	map<string,multiset<int,greater<int>>>::iterator it;
	int i;
	int a[]={
		121,112,211,345
	};
	for(i=0;i<4;i++){
		int r=a[i];
		string s=to_string(r);
		sort(s.begin(),s.end());
		m[s].insert(a[i]);
	}
	it=m.begin();
	while(it!=m.end()){
		if((it->second).size()>1)
		cout<<*((it->second).begin())-*((it->second).rbegin());
		it++;
	}
	return 0;
}