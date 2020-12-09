#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node*left;
	node*right;
	int bf;
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
void preorder(node*root,int &a){
	if(root!=NULL){
		root->bf=height(root->left)-height(root->right);
		if(root->bf>1){
			a=1;
		}
		preorder(root->left,a);
		preorder(root->right,a);
	}
}
int longest(node*root,int &a){
	if(root==NULL){
		return 0;
	}
	if(height(root->left)+height(root->right)+1>a){
		a=height(root->left)+height(root->right)+1;
	}
	longest(root->left,a);
	longest(root->right,a);
	return a;
}
int main(){
	node*root=new node;
	root->data=10;
	node*a=new node;
	a->data=5;
	root->left=a;
	node*b=new node;
	b->data=15;
	a->right=b;
	node*c=new node;
	c->data=2;
	a->left=c;
	node*d=new node;
	d->data=7;
	b->right=d;
	node*e=new node;
	e->data=11;
	c->left=e;
	int f=0;
	f=longest(root,f);
	cout<<f;
	return 0;
}
    