#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,m;
	vector<int>a;
	for(i=0;i<n;i++){
		cin>>m;
		a.push_back(m);
	}
	int q,l,r,x,j,s;
	cin>>q;
	for(i=0;i<q;i++){
		cin>>l>>r>>x;
		s=0;
		for(j=l;j<=r;j++){
			if(x<a[j]){
				s+=a[j];
			}
		}
		cout<<s;
	}
	return 0;
}