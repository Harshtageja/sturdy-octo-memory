#include<iostream>
using namespace std;
int left(int i){
	return 2*i+1;
}
int right(int i){
	return 2*i+2;
}
void preorder(int a[],int i){
	if(i>6){
		return ;
	}
	cout<<a[i];
	preorder(a,left(i));
	preorder(a,right(i));
}
int main(){
	int a[]={
		1,2,3,4,5,6,7
	};
	preorder(a,0);
	return 0;
}