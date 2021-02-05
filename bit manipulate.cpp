#include<iostream>
using namespace std;
int main(){
	int k=5;
	//power of 2 or not
	if((k&(k-1))){
		cout<<"No\n";
	}
	else{
		cout<<"Yes\n";
	}
	//count number of 1
	int c=1;
	while((k&(k-1))){
		k=(k&(k-1));
		c++;
	}
	cout<<c<<"\n";
	//unique when other are twice
	int i;
	int a[]={
		1,1,5,8,3,3,4,4
	};
	int xorsum=0;
	for(i=0;i<8;i++){
		xorsum^=a[i];
	}
	cout<<xorsum<<"\n";
	//two unique number
	int setbit=0;
	for(i=-1;setbit==0;i++){
		setbit=(xorsum&(1<<(i+1)));
	}
	int xord=0;
	for(i=0;i<8;i++){
		if((setbit&a[i])){
			xord^=a[i];
		}
	}
	cout<<xord<<"\n";
	cout<<(xorsum^xord)<<"\n";
	//unique when thrice
	int b[]={
		3,3,3,5,6,6,6
	};
	int j;
	int h[20]={
		0
	};
	for(i=0;i<20;i++){
		int q=0;
		for(j=0;j<7;j++){
			if((b[j]&(1<<i))){
				q++;
			}
		}
		h[i]=q;
	}
	int sum=0;
	for(i=19;i>=0;i--){
		sum+=(1<<i)*(h[i]%3);
		
	}
	cout<<sum<<"\n";
	//all subsets
	string s="abc";
	for(i=0;i<(1<<s.size());i++){
		for(j=0;j<s.size();j++){
			if((i&(1<<j))){
				cout<<s[j];
			}
		}
		cout<<"\n";
	}
	return 0;
}