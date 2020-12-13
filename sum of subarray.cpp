#include<iostream>
using namespace std;
int main(){
	int a[]{
		5,4,3,2,1
	};
	int s,e,i,sum=0;
	for(s=0;s<5;s++){
		sum=0;
		for(e=s;e<5;e++){
			sum+=a[e];
			cout<<sum<<"\n";
		}
	}
	return 0;
}