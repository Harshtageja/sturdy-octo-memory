#include<iostream>
using namespace std;
int kadane(int a[],int n){
	int i,sum=0,ms=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		if(sum<0){
			sum=0;
		}
		ms=max(ms,sum);
	}
	return ms;
}
int main(){
	int a[]={
		4,5,-10,4,5
	};
	int i,t=0;
	for(i=0;i<5;i++){
		t+=a[i];
		a[i]=-a[i];
	}
	cout<<(t+kadane(a,5));
	return 0;
}