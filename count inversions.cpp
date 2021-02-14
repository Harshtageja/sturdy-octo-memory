#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int e,int &count){
	int p[m-l+1];
	int q[e-m];
	int i,j;
	for(i=0;i<m-l+1;i++){
		p[i]=a[l+i];
	}
	for(i=0;i<e-m;i++){
		q[i]=a[m+1+i];
	}
	i=0;
	j=0;
	int k=l;
	while(i<(m-l+1)&&j<(e-m)){
		if(p[i]<q[j]){
			a[k]=p[i];
			i++;
		}
		else{
			count+=(m-l+1-i);
			a[k]=q[j];
			j++;
			cout<<count<<"\n";
		}
		k++;
	}
	while(i<(m-l+1)){
		a[k]=p[i];
		i++;
		k++;
	}
	while(j<(e-m)){
		a[k]=q[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int e,int&count){
	if(l<e){
		int m=(l+e)/2;
		mergesort(a,l,m,count);
		mergesort(a,m+1,e,count);
		merge(a,l,m,e,count);
	}
}
int main(){
	int a[]={
		5,4,3,2,1
	};
	int count=0;
	mergesort(a,0,4,count);
	int i;
	cout<<count;
	return 0;
}