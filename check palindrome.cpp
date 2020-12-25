#include<iostream>
using namespace std;
int main(){
	char a[100];
	cin>>a;
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	i--;
	int j=0,k=0;
	while(a[j]!='\0'){
		if(a[i]!=a[j]){
			k=1;
		}
		j++;
		i--;
	}
	if(k==1){
		cout<<"no";
	}
	else{
		cout<<"yes";
	}
	return 0;
}