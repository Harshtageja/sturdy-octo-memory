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

node*rotate(node*head,int k){
	if(k==0){
		return head;
	}
	int i=0;
	node*c=head;
	node*prev,*m;
	while(c->next!=NULL){
		if(i==k){
			m=prev;
		}
		prev=c;
		c=c->next;
		i++;
	}
		c->next=head;
		head=m->next;
		m->next=NULL;
		return head;
}
void swit(node*head){
	node*h1=head->next;
	node*c,*f,*prev;
	int i=1;
	while(head->next!=NULL){
		c=head->next;
		head->next=head->next->next;
		prev=head;
		head=c;
	i++;
		
	}
	if(i%2==0){
		prev->next=h1;
	}
	else{
		head->next=h1;
	}
	
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	head=add(head,4);
	head=add(head,5);
	head=add(head,6);
	swit(head);
	print(head);
	return 0;
}
    
