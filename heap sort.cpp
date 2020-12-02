#include<iostream>
#include<vector>
using namespace std;
int par(int i){
	return (i-1)/2;
}
vector<int>ins(vector<int>h,int k){
	h.push_back(k);
	int i=h.size()-1;
	while(i>0&&h[i]<h[par(i)]){
		swap(h[i],h[par(i)]);
		i=par(i);
	}
	return h;
}
vector<int> del(vector<int>h){
	int k=h[0];
	cout<<k;
	h[0]=h[h.size()-1];
	h.pop_back();
	int i=0;
	while((h[i]>h[2*i+1]||h[i]>h[2*i+2])&&2*i+1<h.size()){
		if(h[2*i+1]<h[2*i+2]){
			swap(h[2*i+1],h[i]);
			i=2*i+1;
		}
		else{
			swap(h[2*i+2],h[i]);
			i=2*i+2;
		}
	}
	
	return h;
}
int main(){
	vector<int>h;
	h=ins(h,5);
	h=ins(h,4);
	h=ins(h,3);
	h=ins(h, 2);
	h=ins(h,1);
	h=del(h);
	h=del(h);
	h=del(h);
	h=del(h);
	h=del(h);
	for(int i=0;i<h.size();i++){
		cout<<h[i];
	}
	return 0;
}