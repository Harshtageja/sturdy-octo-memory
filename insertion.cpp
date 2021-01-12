#include<iostream>
using namespace std;
int main(){
	int a[]={
		5,4,3,2,1
	};
	int i,j,k;
	for(i=1;i<5;i++){
		j=i-1;
		k=a[i];
		while(j>=0&&a[j]>k){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	for(i=0;i<5;i++){
		cout<<a[i];
	}
	return 0;
}