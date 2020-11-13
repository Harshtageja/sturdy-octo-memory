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
	node*prev=NULL;
	node*p;
	node*h=head;
	while(i!=c&&head!=NULL){
		p=head->next;
		head->next=prev;
		prev=head;
		head=p;
		i++;
	}
	if(head!=NULL)
	h->next=reverse(head,c);
	return prev;
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	head=add(head,4);
	
	head=reverse(head,2);
	print(head);
	return 0;
}