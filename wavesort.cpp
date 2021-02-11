#include<iostream>
using namespace std;
void wavesort(int a[],int n ){
	int i;
	for(i=1;i<n;i=i+2){
		if(a[i]>a[i-1]){
			swap(a[i],a[i-1]);
		}
		if(a[i]>a[i+1]&&i<n-1){
			swap(a[i],a[i+1]);
		}
	}
}
int main(){
	int a[]={
		5,4,3,2,1
	};
	wavesort(a,5);
	int i;
	for(i=0;i<5;i++){
		cout<<a[i];
	}
	return 0;
}