#include<iostream>
#include<string>
using namespace std;
void all(string s,string ans){
	if(s.size()==0){
		return;
	}
	string a[]={
		"./","abc","def","ghi","jkl","mno","pqrs"
		,"tuv","wxyz"
	};
	int i;
	string m=s;
	string n;
	m.erase(m.begin());
	int k=((int)s[0]);
	k-=48;
	for(i=0;i<a[k].size();i++){
		n=ans;
		n.push_back(a[k][i]);
		cout<<n<<"\n";
		all(m,n);
	}
	
}

int main(){
	all("123","");
	return 0;
}