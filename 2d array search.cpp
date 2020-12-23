#include<iostream>
using namespace std;
int main(){
	int a[4][4];
	int i,j;
	int k=1;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			a[i][j]=k;
			cout<<k<<" ";
			k++;
		}
		cout<<"\n";
	}
	i=0,j=3;
	int n=2;
	while(i<4&&j>-1){
		if(a[i][j]==n){
			cout<<i<<" "<<j;
			break;
		}
		else if(a[i][j]>n){
			j--;
		}
		else{
			i++;
		}
	}
	return 0;
}