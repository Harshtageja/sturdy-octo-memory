#include<iostream>
using namespace std;
int main(){
	string s="aah";
	char a='a';
	size_t f=s.find(a);
	int n=0;
	while(f!=string::npos){
		s.erase(s.begin()+f);
		n++;
		f=s.find(a);
		
	}
	int i=0;
	while(i!=n){
		s+=a;
		i++;
	}
	cout<<s;
	return 0;
}