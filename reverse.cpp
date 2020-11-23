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

node* reverse(node*head){
	node*prev=NULL,*c;
	while(head!=NULL){
		c=head->next;
		head->next=prev;
		prev=head;
		head=c;
		
	}
	return prev;
}
int main(){
	node*head;
	head=add(head,5);
	head=add(head,8);
	head=add(head,4);
	head=add(head,6);
	head=reverse(head);
	print(head);
	return 0;
}
    