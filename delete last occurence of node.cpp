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
node*del(node*head,int data){
	node*c=head;
	node*prev=NULL;
	node*k=NULL;
	while(c!=NULL){
		if(c->data==data){
			prev=k;
		}
		k=c;
		c=c->next;
		
	}
	if(prev==NULL){
		head=head->next;
	}
	if(prev!=NULL){
		prev->next=prev->next->next;
	}
	return head;
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	head=add(head,4);
	head=add(head,6);
	head=add(head,6);
	
	head=del(head,6);
	print(head);
	return 0;
}
    