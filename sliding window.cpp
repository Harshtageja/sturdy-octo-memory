#include<iostream>
#include<deque>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	multiset<int,greater<int>>a;
	vector<int>b={
		1,3,-1,-3,5,3,6,7
	};
	vector<int>ans;
	int i;
	for(i=0;i<3;i++){
		a.insert(b[i]);
	}
	ans.push_back(*a.begin());
	for(i=3;i<b.size();i++){
		a.erase(a.lower_bound(b[i-3]));
		a.insert(b[i]);
		ans.push_back(*a.begin());
	}
	for(auto i:ans){
		cout<<ans[i];
	}
	return 0;
}