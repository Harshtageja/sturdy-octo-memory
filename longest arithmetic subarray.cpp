#include<iostream>
using namespace std;
int main(){
	int a[]{
		10,7,4,6,8,10,11
	};
	int s=0,e=0,i,sum=1,d=1;
	int b[6];
	for(i=0;i<6;i++){
		b[i]=a[i+1]-a[i];
	}
	for(i=0;i<5;i++){
		if(b[i]==b[i+1]){
			sum++;
		}
		else{
			if(sum>d){
				s=e;
				e=i+1;
				d=sum;
				sum=1;
				
			}
			
		}
	}
	cout<<s<<e;
	return 0;
}