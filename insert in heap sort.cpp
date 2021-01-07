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
void remove(int a[],int n){
	a[0]=a[n-1];
	int i=0;
	int lc=2*i+1;
	int rc=2*i+2;
	while((a[i]>a[lc]||a[i]>a[rc])&&lc<n-1){
		if(a[i]>a[lc]&&a[i]>rc){
			if(a[lc]>a[rc]){
				swap(a[i],a[rc]);
				i=rc;
			}
			else{
				swap(a[i],a[lc]);
				i=lc;
			}
		}
		else if(a[i]>a[lc]){
			swap(a[i],a[lc]);
			i=lc;
		}
		else{
			swap(a[i],a[rc]);
			i=rc;
		}
		lc=2*i+1;
		 rc=2*i+2;
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
	remove(a,5);
	remove(a,4);
	remove(a,3);
	for(i=0;i<3;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}
