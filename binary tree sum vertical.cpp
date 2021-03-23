#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node*left;
	node*right;
};
void preorder(node*root,int hd,int vd,map<int,
	map<int,vector<int>>>&m){
	if(root==NULL){
		return;
	}
	m[hd][vd].push_back(root->data);
	preorder(root->left,hd-1,vd+1,m);
	preorder(root->right,hd+1,vd+1,m);
}
int _tod(int k){
	int z=0;
	int i=0;
	while(k!=0){
		int r=k%10;
		z=z+r*pow(2,i);
		i++;
		k/=10;
	}
	return z;
}
int main(){
	node*root=new node;
	node*a1=new node;
	node*a2=new node;
	node*a3=new node;
	node*a4=new node;
	node*a5=new node;
	node*a6=new node;
	node*a7=new node;
	node*a8=new node;
	root->data=1;
	root->left=a1;
	root->right=a2;
	a1->data=1;
	a1->left=a3;
	a1->right=a4;
	a3->data=1;
	a4->data=0;
	a2->data=0;
	a2->left=a5;
	a2->right=a6;
	a5->data=1;
	a6->data=0;
	map<int,map<int,vector<int>>>m;
	map<int,map<int,vector<int>>>::iterator it;
	map<int,vector<int>>::iterator itr;
	
	preorder(root,0,0,m);
	it=m.begin();
	int k=0;
	while(it!=m.end()){
		itr=(it->second).begin();
		int z=0;
		while(itr!=(it->second).end()){
			int i;
			for(i=0;i<(itr->second).size();i++){
				z=z*10+(itr->second)[i];
			}
			itr++;
		}
		k+=_tod(z);
		it++;
	}
	cout<<k;
	return 0;
}