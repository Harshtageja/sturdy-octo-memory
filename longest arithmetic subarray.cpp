#include<iostream>
using namespace std;
int main(){
	int a[]={
		1,2,4,6,8,10,11,12
	};
	int i,j,count=1,maxc=0,d=0;
	for(i=1;i<8;i++){
		if(a[i]-a[i-1]==d){
			count++;
		}
		else{
			maxc=max(maxc,count);
			d=a[i]-a[i-1];
		}
	}
	cout<<maxc;
	return 0;
}