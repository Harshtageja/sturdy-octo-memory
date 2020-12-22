#include<iostream>
using namespace std;
int main(){
	int a[5][5]={
		{
			1,2,3,4,5
		},{
		6,7,8,9,10
		},{
		11,12,13,14,15
		},{
			16,17,18,19,20
		},{
			21,22,23,24,25
		}
	};
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			swap(a[i][j],a[j][i]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
