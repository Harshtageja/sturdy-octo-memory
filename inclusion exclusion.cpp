#include<iostream>
using namespace std;
int div(int n,int a,int b){
	return ((n/a)+(n/b)-n/(a*b));
}
int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	int c=b;
	b=a%b;
	a=c;
	return gcd(a,b);
}
int main(){
	// inclusion exclusion
	cout<<div(40,5,7)<<"\n";
	// gcd
	cout<<gcd(45,30);
	return 0;
}