#include<iostream>
using namespace std;
int main(){
	int n=65;
	if((n&n-1)==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}