#include<iostream>
using namespace std;
int main(){
	int a[]={
		-1,4,-6,7,-4
	};
	int i;
	int s=0;
	int m;
	for(i=0;i<5;i++){
		s+=a[i];
		
		if(s<0){
			s=0;
		}
		
		m=max(s,m);
	}
	return 0;
}