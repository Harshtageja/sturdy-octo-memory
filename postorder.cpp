#include<iostream>
using namespace std;
int left(int i){
	return 2*i+1;
}
int right(int i){
	return 2*i+2;
}
void postorder(int a[],int i){
	if(i>6){
		return ;
	}
	postorder(a,left(i));
	
	postorder(a,right(i));
	cout<<a[i];
	
	
}
int main(){
	int a[]={
		1,2,3,4,5,6,7
	};
	postorder(a,0);
	return 0;
}