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
			16,171,18,19,20
		},{
			21,22,23,24,25
		}
	};
	int i=0,j=0,k=0,m=5,n=5,si=-1,sc=-1,f=0;
	while(1){
		while(i<m&&j<n&&i>si&&j>sc){
			cout<<a[i][j];
			if(i==2&&j==2){
				break;
			}
			else if(k%4==0){
				j++;
			}
			else if(k%4==1){
				i++;
			}
		    else if(k%4==2){
					j--;
				}
			else {
					i--;
				}
			
		}
		if(i==2&&j==2){
				break;
			}
			k++;
			if(k%4==3){
				i--;
				j++;
				si++;
				f=1;
			}
			else if(k%4==0){
				i++;
				j++;
				if(f==1)
				n--;
			}
			else if(k%4==1){
				j--;
				i++;
				if(f==1)
				m--;
			}
			else{
				i--;
				j--;
				if(f==1)
				sc++;
			}
	}
	return 0;
}