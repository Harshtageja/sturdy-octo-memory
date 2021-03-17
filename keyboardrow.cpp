#include<iostream>
#include<map>
using namespace std;
int main(){
	string s="dog";
	int k=97;
	int i;
	int count=0;
	for(i=0;i<s.size();i++){
		int q=(int)s[i];
		cout<<q<<"\n";
		if(k<q){
			count+=(q-k);
		}
		else if(k>q){
			count+=(k-q);
		}
		cout<<count<<"\n";
		k=s[i];
	}
	cout<<count;
	return 0;
}
