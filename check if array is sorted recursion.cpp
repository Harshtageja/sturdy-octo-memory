#include<iostream>
using namespace std;
bool check(int a[],int n,int i){
	if(i>=n-1){
		return true;
	}
	if(a[i]<a[i+1]){
		return check(a,n,i+1);
	}
	else return false;
}
int main(){
	int a[]={
		1,2,3,4,5
	};
	if(check(a,5,0)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}