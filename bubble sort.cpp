#include<iostream>
using namespace std;
int main(){
	int a[]={
		5,4,3,2,1
	};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for (i=0;i<5;i++){
		cout<<a[i];
	}
	return 0;
}