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
void las(node*head,int n){
	node*h=head;
	int c=0;
	while(h!=NULL){
		c++;
		h=h->next;
	}
	int i=0;
	int k=c-n;
	while(i!=k){
		i++;
		head=head->next;
	}
	cout<<head->data;
}


int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,1);
	head=add(head,3);
	head=add(head,1);
	las(head,4);
	print(head);
	return 0;
}
   