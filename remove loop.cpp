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
void loop(node*head){
	vector<node*>m;
	node*prev;
	vector<node*>::iterator it;
	while(head!=NULL){
		it=find(m.begin(),m.end(),head);
		if(it!=m.end()){
			prev->next=NULL;
			return;
		}
		m.push_back(head);
		prev=head;
		head=head->next;
	}
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	node*c=head;
	while(c->next!=NULL){
		c=c->next;
	}
	c->next=head;
	loop(head);
	print(head);
	return 0;
}