#include<iostream>
using namespace std;
int main(){
	int a[3][3]={
		{
			3,4,5
		},{
			0,1,0
		},{
			0,0,1
		}
	};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){
			swap(a[i][j],a[j][i]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}