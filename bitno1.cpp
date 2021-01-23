#include<iostream>
using namespace std;
int main(){
	int n=64;
	int k=1;
	while((n&n-1)!=0){
		k++;
		n=(n&n-1);
	}
	cout<<k;
	return 0;
}