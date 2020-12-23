#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	int a[3][3]={
		{
			1,2,3
		},{
			4,5,6
		},{
			7,8,9
		}
	};
	int b[3][3]={
		{
			1,2,3
		},{
			4,5,6
		},{
			7,8,9
		}
	};
	int s=0;
	int c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s=0;
			for(k=0;k<3;k++){
				s+=a[i][k]*b[k][j];
			}
			c[i][j]=s;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}