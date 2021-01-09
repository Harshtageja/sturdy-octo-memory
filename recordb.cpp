#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		1,2,0,7,2,0,2,2,9
	};
	int i;
	int m=INT_MIN;
	int c=0;
	for(i=0;i<9;i++){
		if(i==8&&a[i]>m){
			c++;
		}
		else if(a[i]>m&&a[i]>a[i+1]){
			m=a[i];
			c++;
		}
		else if(a[i]>m){
			m=a[i];
		}
		
	}
	cout<<c;
	return 0;
}