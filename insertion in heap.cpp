#include<iostream>
#include<vector>
using namespace std;
int par(int i){
	return (i-1)/2;
}
vector<int>ins(vector<int>h,int k){
	int i;
	h.push_back(k);
	i=h.size()-1;
	while(i!=0&&h[par(i)]>h[i]){
		swap(h[i],h[par(i)]);
		
		i=par(i);
	}
	return h;
	
}
int main(){
	vector<int>h;
	int i;
	h=ins(h,5);
	h=ins(h,4);
	h=ins(h,3);
	h=ins(h,2);
	h=ins(h,1);
	for(i=0;i<h.size();i++){
		cout<<h[i];
	}
	return 0;
}