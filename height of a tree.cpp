#include<iostream>
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
int main(){
	node*root=new node;
	root->data=1;
	node*a=new node;
	a->data=2;
	root->left=a;
	node*b=new node;
	b->data=3;
	root->right=b;
	node*c=new node;
	c->data=4;
	a->left=c;
	node*d=new node;
	c->data=5;
	a->right=d;
	cout<<height(root);
	return 0;
}