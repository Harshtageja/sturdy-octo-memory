#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n=8;
	int b=0;
	while(pow(2,b)<=n){
		b++;
	}
	cout<<b<<"\n";
	//get bit procedure
	int j;
	for(j=b-1;j>=0;j--){
		if((n&(1<<j))!=0){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	//set bit procedure
	cout<<"\n";
	int m=(n|(1<<1));
	cout<<m<<"\n";
	// power of 2 or not
	if((n&n-1)!=0){
		cout<<"No";
	}
	else {
		cout<<"yes";
	}
	// all subsets;
	char a[]={
		'a','b','c'
	};
	n=3;
	int i;
	for(i=0;i<(1<<n);i++){
		for(j=0;j<3;j++){
			if((i&(1<<j))!=0){
				cout<<a[j];
			}
		}
		cout<<"\n";
	}
	return 0;
}