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
	return 0;
}