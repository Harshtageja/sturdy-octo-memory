#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node*next;
};
node*add(node*head,int data){
	node*temp=new node;
	temp->data=data;
	if(head==NULL){
		return temp;
	}
	node*c=head;
	while(c->next!=NULL){
		c=c->next;
	}
	c->next=temp;
	return head;
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}
node* del(node*head,int d){
	node*s=head;
	node*p=NULL;
	node*k;
	while(s!=NULL){
		if(s->data==d){
			k=p;
		}
		p=s;
		s=s->next;
	}
	if(k==NULL){
		return head->next;
	}
	else{
		k->next=k->next->next;
	}
	return head;
	
}

int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,1);
	head=add(head,3);
	head=add(head,1);
	head=del(head,1);
	print(head);
	return 0;
}
