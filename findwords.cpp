#include<iostream>
#include<string.h>
using namespace std;
bool dictionaryContains(string &word)
{

    string dictionary[] = {"mobile","samsung","sam","sung",

                            "man","mango", "icecream","and",

                            "go","i","love","ice","cream"};

    int n = sizeof(dictionary)/sizeof(dictionary[0]);

    for (int i = 0; i < n; i++)

        if (dictionary[i].compare(word) == 0)

            return true;

    return false;
}
void makeit(string s,int n,string result){
	int i;
	for(i=1;i<=n;i++){
		string k=s.substr(0,i);
		if(dictionaryContains(k)){
			if(i==n){
				cout<< result+k;
				return;
			}
			makeit(s.substr(i,n-i),n-i,result+k+" ");
			cout<<"\n";
		}
	}
}
int main(){
	string s="ilovesamsung";
	makeit(s,s.size(),"");
	return 0;
}