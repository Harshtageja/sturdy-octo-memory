#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node*right;
};
node*add(node*head,int data){
	node*temp=new node;
	temp->data=data;
	if(head==NULL){
		return temp;
	}
	node*h=head;
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=temp;
	return h;
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}
int mid(node*head){
	node*s=head;
	node*d=head;
	while(d!=NULL&& d->next!=NULL){
		d=d->next->next;
		s=s->next;
	}
	return s->data;
}
node*merge(node*root1,node*root2){
	node*temp=new node;
	if(root1->data<root2->data){
		temp->data=root1->data;
		root1=root1->next;
	}
	else{
		temp->data=root2->data;
		root2=root2->next;
	}
	node*k=temp;
	while(root1!=NULL&&root2!=NULL){
		if(root1->data<root2->data){
			k->next=root1;
			k=k->next;
			root1=root1->next;
		}
		else{
			k->next=root2;
			k=k->next;
			root2=root2->next;
		}
		
	}
	
	if(root1!=NULL){
			k->next=root1;
			
		}
		else{
			k->next=root2;
		}
		return temp;
}
node* flat(node*root){
	if(root==NULL||root->right==NULL){
		return root;
	}
	return merge(root,flat(root->right));
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,5);
	head=add(head,7);
	head=add(head,15);
	node*head1;
	head1=add(head1,2);
	head1=add(head1,6);
	head1=add(head1,9);
	head1=add(head1,14);
	head->right=head1;
	node*p;
	p=flat(head);
	print(p);
	
	return 0;
}