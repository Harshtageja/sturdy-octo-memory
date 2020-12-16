#include<iostream>
using namespace std;
int main(){
	int a[]={
		3,9,7,8
	};
	int s=15;
	int sum=0;
	int i=0,j,k;
	for(j=0;j<4&&sum+a[j]<s;j++){
		sum+=a[j];
	}
	if(s==sum){
		cout<<i<<j;
		return 0;
	}
	while(j<4){
		sum+=a[j];
		while(i<4&&sum>s){
			sum-=a[i];
			i++;
		}
		if(sum==s){
			cout<<i<<j;
		return 0;
		}
		
		j++;
	}
	return 0;
}