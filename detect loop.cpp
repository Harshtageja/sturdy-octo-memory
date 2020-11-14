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
bool loop(node*head){
	vector<node*>m;
	vector<node*>::iterator it;
	while(head!=NULL){
		it=find(m.begin(),m.end(),head);
		if(it!=m.end()){
			return true;
		}
		m.push_back(head);
		head=head->next;
	}
	return false;
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
	c->next=head->next;
	if(loop(head)){
		cout<<"yes there is a loop";
	}
	else
	cout<<"no";
	return 0;
}