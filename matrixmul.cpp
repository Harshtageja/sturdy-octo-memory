#include<iostream>
using namespace std;
int main(){
	int a[3][3]={
		{
			1,0,0
		},{
			0,1,0
		},{
			0,0,1
		}
	};
	int c[3][3];
	int i,j,k,s=0;;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s=0;
			for(k=0;k<3;k++){
				s+=a[i][k]*a[k][j];
					
			}
			a[i][j]=s;
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