#include<iostream>
#include<map>
using namespace std;
struct node{
	int data;
	node*next;
};
node*add(node*head,int data){
	node*temp=new node;
	node*c=head;
	temp->data=data;
	if(c==NULL){
		return temp;
	}
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
node*reverse(node*head,int c){
	int i=0;
	node*p;
	node*prev=NULL;
	node*h=head;
	if(head==NULL){
		return NULL;
	}
	while(i!=c&&head!=NULL){
		p=head->next;
		head->next=prev;
		prev=head;
		head=p;
		i++;
	}
	i=1;
	h->next=head;
	while(i!=c&&head!=NULL){
		head=head->next;
		i++;
	}
	if(head!=NULL){
		head->next=reverse(head->next,2);
	}
	return prev;
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	head=add(head,4);
	head=add(head,5);
	head=add(head,6);
	
	head=reverse(head,2);
	print(head);
	return 0;
}
