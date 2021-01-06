#include<iostream>
using namespace std;
void ins(int a[],int i,int d){
	a[i]=d;
	if(i==0){
		return;
	}
	int p=(i-1)/2;
	while(p>=0&&a[p]>a[i]){
			swap(a[i],a[p]);
			i=p;
			p=(i-1)/2;
	}
}
int main(){
	int a[5];
	ins(a,0,23);
	ins(a,1,15);
	ins(a,2,77);
	ins(a,3,66);
	ins(a,4,3);
	int i;
	for(i=0;i<5;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}