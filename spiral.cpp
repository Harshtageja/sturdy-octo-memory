#include<iostream>
using namespace std;
int main(){
	int a[4][4];
	int i=0,j=0;
	int mini=0,maxi=3,minj=0,maxj=3;
	int k=0;
	int m=1;
	while(1){
		
		if(i>maxi){
			i=i-1;
			j=j-1;
			k++;
			maxj--;
			continue;
		}
		else if(i<mini){
			
			k++;
			i++;
			j++;
			minj++;
			continue;
		}
		else if(j>maxj){
			k++;
			j--;
			i++;
			mini++;
			continue;
		}
		else if(j<minj){
			j++;
			i--;
			maxi--;
			k++;
			continue;
		}
		a[i][j]=m;
		m++;
		if(i==2&&j==1){
			break;
		}
		if(k%4==0){
			j++;
		}
		else if(k%4==1){
			i++;
		}
		else if(k%4==2){
			j--;
		}
		else{
			i--;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}