#include<iostream>
using namespace std;
void tellme(int a[],int n,int &f,int &l,int k,int i){
	if(i>6){
		return;
	}
	if(f==-1&&a[i]==k){
		f=i;
	}
	else if(a[i]==k){
		l=i;
	}
	tellme(a,n,f,l,k,i+1);
}
int main(){
	int a[]={
		4,2,1,2,5,2,7
	};
	int f=-1,l=-1;
	tellme(a,7,f,l,2,0);
	cout<<f<<l;
	return 0;
}