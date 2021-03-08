#include<iostream>
using namespace std;
void permutation(string s,int n){
	if(n==(s.size()-1)){
		cout<<s<<"\n";
		return;
	}
	int i;
	for(i=n;i<s.size();i++){
		swap(s[i],s[n]);
		permutation(s,n+1);
		swap(s[i],s[n]);
	}
}
int main(){
	string s="Harsh";
	permutation(s,0);
	return 0;
}