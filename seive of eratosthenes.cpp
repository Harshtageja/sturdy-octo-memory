#include<iostream>
using namespace std;
int main(){
	int i;
	int a[50]={
		0
	};
	int m=2;
	while((m*m)<50){
		for(i=(m*m);i<50;i++){
			if(i%m==0){
				a[i]=1;
			}
		}
		m++;
		while(a[m]!=0){
			m++;
		}
	}
	for(i=0;i<50;i++){
		if(a[i]==0){
			cout<<i<<"\n";
		}
	}
	return 0;
}