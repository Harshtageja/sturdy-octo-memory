#include<iostream>
using namespace std;

bool ifok(int a[8][8],int m,int n){
	int i,j;
	if(a[m][n]==1){
		return false;
	}
	for(i=0;i<8;i++){
		if(a[i][n]==1){
			return false;
		}
		if(a[m][i]==1){
			return false;
		}
	}
	i=m+1,j=n+1;
	while(i<8&&j<8){
		if(a[i][j]==1){
			return false;
		}
		i++;
		j++;
	}
	i=m-1;
	j=n-1;
	while(i>-1&&j>-1){
		if(a[i][j]==1){
			return false;
		}
		i--;
		j--;
	}
	i=m+1;
	j=n-1;
	while(i<8&&j>-1){
		if(a[i][j]==1){
			return false;
		}
		i++;
		j--;
	}
	i=m-1;
	j=n+1;
	while(i>-1&&j<8){
		if(a[i][j]==1){
			return false;
		}
		i--;
		j++;
	}
	return true;
	
}
bool queen(int a[8][8],int k,int m,int n){
	if(k==9){
		return true;
	}
	int i,j;
	for(i=m;i<8;i++){
		for(j=n;j<8;j++){
			if(ifok(a,i,j)){
				a[i][j]=1;
				if(queen(a,k+1,m,n)){
					return true;
				}
				a[i][j]=0;
			}
		}
	}
	return false;
}
int main(){
	int a[8][8]={
		0
	};
	int i,j;
	queen(a,1,0,0);
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	return 0;
}