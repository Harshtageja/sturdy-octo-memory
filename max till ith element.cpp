#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={
		1,0,5,4,6,8
	};
	int i;
	int max=INT_MIN;
	for(i=0;i<6;i++){
		if(a[i]>max){
			max=a[i];
		}
		cout<<max;
	}
	return 0;
}