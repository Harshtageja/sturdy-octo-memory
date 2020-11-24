#include<iostream>
using namespace std;
int main(){
	int a[]={
		5,4,3,2,1
	};
	int i,j;
	for(i=0;i<4;i++){
		int min=i;
		for(j=i+1;j<5;j++){
			if(a[j]<a[min]){
				min=j;
			}
			swap(a[min],a[i]);
		}
	}
	for (i=0;i<5;i++){
		cout<<a[i];
	}
	return 0;
}