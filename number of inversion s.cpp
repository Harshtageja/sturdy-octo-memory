#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int e,int &count){
	int p[m-l+1];
	int q[e-m];
	int i,j,k;
	for(i=0;i<=m;i++){
		p[i]=a[l+i];
	}
	for(i=0;i<e-m;i++){
		q[i]=a[m+1+i];
	}
	i=0,j=0,k=l;
	while(i<=m-l&&j<e-m){
		if(p[i]<q[j]){
			a[k]=p[i];
			i++;
		}
		else{
			a[k]=q[j];
			count+=(m-(l+i)+1);
			cout<<count<<m<<"\n";
			j++;
		}
		k++;
	}
	while(i<=m-l){
		a[k]=p[i];
		i++;
		k++;
	}
	while(j<e-m){
		a[k]=q[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int e,int &count){
	if(l<e){
		int m=(l+e)/2;
		mergesort(a,l,m,count);
		mergesort(a,m+1,e,count);
		merge(a,l,m,e,count);
	}
}
int main(){
	int i;
	int a[5]={
		5,4,3,2,1
	};
	int count=0;
	mergesort(a,0,4,count);
	for(i=0;i<5;i++){
		//cout<<a[i];
	}
	
	//cout<<"\n"<<count;
	return 0;
}