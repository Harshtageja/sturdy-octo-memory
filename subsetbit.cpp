#include<iostream>
using namespace std;
int main(){
	char a[]={
		'a','b','c'
	};
	int i,j;
	int n=3;
	for(i=0;i<(1<<n);i++){
		for(j=0;j<n;j++){
			if((i&(1<<j))!=0){
				cout<<a[n-j-1];
			}
		}
		cout<<"\n";
	}
	return 0;
}