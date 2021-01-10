#include<iostream>
using namespace std;
int main(){
	int a[]={
		1,7,15,20
	};
	int s=0;
	int l=3;
	int d=22;
	int sum=a[s]+a[l];
	while(sum!=d&&s<l){
		if(sum>d){
			l--;
		}
		else if(sum<d){
			s++;
		}
		sum=a[l]+a[s];
	}
	if(sum==d){
		cout<<l<<" "<<s;
	}
	
	return 0;
}