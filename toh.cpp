#include<iostream>
using namespace std;
void toh(char A, char B,char H,int n){
	if(n==0){
		return;
	}
	toh(A,H,B,n-1);
	cout<<A<<"to"<<B<<"\n";
	toh(H,B,A,n-1);
}
int main(){
	toh('a','b','h',3);
	return 0;
}