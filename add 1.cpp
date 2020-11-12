#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}
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
node*reverse(node*head){
	node*prev=NULL;
	while(head!=NULL){
		node*p=head->next;
		head->next=prev;
		prev=head;
		head=p;
		
	}
	return prev;
	
}
node*sum(node*head){
	int s,c=1;
	node*h=head;
	node*f;
	while(head!=NULL){
		s=head->data+c;
		c=s/10;
		if(c!=0){
			head->data=s%10;
		}
		else{
			head->data=s;;
		}
		f=head;
		head=head->next;
		
	}
	
	if(c!=0){
		node*temp=new node;
		temp->data=c;
		f->next=temp;
	}
	return h;
}
int main(){
	node*head;
	head=add(head,9);
	head=add(head,8);
	head=reverse(head);
	head=sum(head);
	head=reverse(head);
	print(head);
	return 0;
}