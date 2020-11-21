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

node*rotate(node*head,int m,int n){
	int i=1,j=0;
	node*c=head;
	while(c!=NULL&&i<m){
		c=c->next;
		i++;
	}
	node*p;
	if(m==0)
	p=head;
	else
	p=c->next;
	while(p!=NULL&&j<n){
		j++;
		p=p->next;
	}
	c->next=p;
	if(m==0){
		return p;
	}
		return head;
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	head=add(head,4);
	head=add(head,5);
	head=add(head,6);
	head=rotate(head,1,4);
	print(head);
	return 0;
}
    