#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int prec(char a){
	if(a=='+'||a=='-'){
		return 1;
	}
	if(a=='*'||a=='/'){
		return 2;
	}
	else return 3;
}
string topostfix(string s,string result,vector<char>k){
	int i;
	for(i=0;i<s.size();i++){
		if(s[i]=='('){
			k.push_back(s[i]);
		}
		else if(s[i]==')'){
			while((k.size()!=0)&&(k[k.size()-1]!='(')){
				result.push_back(k[k.size()-1]);
				k.pop_back();
			}
			if(k[i]=='('){
				k.pop_back();
			}
		}
		else if(s[i]>='a'&&s[i]<='z'){
			result.push_back(s[i]);
		}
		else{
			while((k.size()!=0)&&(k[k.size()-1]!='(')&&(prec(k[k.size()-1])>prec(s[i]))){
				result.push_back(k[k.size()-1]);
				k.pop_back();
			}
			k.push_back(s[i]);
				
		}
	}
	return result;
	
}
int main(){
	string s="a+b*(c-d/e^f-g))";
	string res="";
	vector<char>k;
	k.push_back('(');
	res=topostfix(s,res,k);
	cout<<res;
	return 0;
}