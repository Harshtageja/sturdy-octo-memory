#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node*left;
	node*right;
};
int height(node*root){
	if(root==NULL){
		return 0;
	}
	return 1+ max(height(root->left),height(root->right))
	;
}

bool isB(node*root, int a,int b){
	if(root==NULL){
		return true;
	}
	if(root->data>a&&root->data<b){
		return isB(root->left,a,root->data)&&isB(root->right,root->data,b);
	}
	return false;
}
bool isBST(node*root){
	return isB(root,INT_MIN,INT_MAX);
}
int main(){
	node*root=new node;
	root->data=10;
	node*a=new node;
	a->data=5;
	root->left=a;
	node*b=new node;
	b->data=15;
	root->right=b;
	node*c=new node;
	c->data=2;
	a->left=c;
	node*d=new node;
	d->data=7;
	a->right=d;
	if(isBST(root)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
