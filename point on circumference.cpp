#include<iostream>
#include<map>
#include<math.h>
using namespace std;
int main(){
	map<int,int>m{
		
	};
	string s="LLRULD";
	int i;
	map<int,int>::iterator it;
	int Lm=0;
	int Um=0;
	int Rm=0;
	int Dm=0;
	for(i=0;i<s.size();i++){
		if(s[i]=='L')
		Lm++;
		else if(s[i]=='U')
		Um++;
		else if(s[i]='R')
		Rm++;
		else{
			Dm++;
		}
	}
	
	if(max(max(max(Lm,Um),Rm),Dm)>3){
		cout<<"yes";
	}
	else if(pow(max(Lm,Rm),2)+pow(max(Um,Dm),2)>3)
	cout<<"yes";
	else{
		cout<<"no";
	}
	return 0;
}