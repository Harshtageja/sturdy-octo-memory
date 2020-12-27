#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i;
	for(i=0;i<str.size();i++){
		if(str[i]>96){
			str[i]-=32;
		}
	}
	cout<<str;
	return 0;
}