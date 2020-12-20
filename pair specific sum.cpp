#include<iostream>
using namespace std;
int main(){
	int a[]={
		2,4,1,6,13
	};
	int l=0;
	int e=4;
	int s=10;
	int sum;
	while(l<e){
		sum=a[l]+a[e];
		if(sum==s){
			cout<<l<<" "<<e;
			break;
		}
		else if(sum>s){
			e--;
		}
		else{
			l++;
		}
	}
	
	return 0;
}