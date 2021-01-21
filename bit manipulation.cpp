#include<iostream>
using namespace std;
int main(){
	int n=5;
	int i=1;
	if(n&(1<<i)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	int m=1<<i;
	int k=n|m;
	cout<<k;
	m=~m;
	k=k&m;
	cout<<k;
	return 0;
}