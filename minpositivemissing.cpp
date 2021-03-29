#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		0,-9,1,3,-4,5
	};
	map<int,int>m;
	int i;
	for(i=0;i<6;i++){
		if(a[i]>0){
			m[a[i]]=1;
		}
	}
	map<int,int>::iterator it;
	it=m.begin();
	i=1;
	while(m[i]!=0){
		i++;
	}
	cout<<i;
	return 0;
}