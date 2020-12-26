#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	int m,n,i,j,k=0;
	int maxm=INT_MIN;
	cin.getline(a,100);
	i=0;
	int s,e;
	while(a[i]!='\0'){
		if(a[i]==' '){
			if(k>maxm){
				maxm=k;
				m=s;
				n=i-1;
			}
			k=0;
			s=i+1;
		}
		else{
			k++;
		}
		i++;
	}
	for(i=m;i<=n;i++){
		cout<<a[i];
	}
	return 0;
}