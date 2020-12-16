#include<iostream>
using namespace std;
int main(){
	int a[]{
		1,3,2,4,0,-1,6
	};
	int b[8];
	int i;
	for(i=0;i<8;i++){
		if(a[i]>=0){
			b[a[i]]=5;
		}
	}
	for(i=0;i<sizeof(b);i++){
		if(b[i]!=5){
			break;
		}
	}
	cout<<i;
	return 0;
}