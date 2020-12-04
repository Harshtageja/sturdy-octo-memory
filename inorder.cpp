#include<iostream>
using namespace std;
int left(int i){
	return 2*i+1;
}
int right(int i){
	return 2*i+2;
}
void inorder(int a[],int i){
	if(i>6){
		return ;
	}
	inorder(a,left(i));
	cout<<a[i];
	
	inorder(a,right(i));
}
int main(){
	int a[]={
		1,2,3,4,5,6,7
	};
	inorder(a,0);
	return 0;
}