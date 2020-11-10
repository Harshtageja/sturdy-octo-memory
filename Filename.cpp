#include<iostream>
#include<vector>
using namespace std;
struct node{
	int data;
	node*next;
};
void add(node**head,int data){
	node*temp=new node;
	temp->data=data;
	if(*head==NULL){
		*head=temp;
		return;
	}
	node*h=*head;
	while(h->next!=NULL){
		h=h->next;
	}
	h->next=temp;
	
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}
			
void de(node*head){
	node*ptr1=head;
	node*ptr2=head;
	node*prev;
	while(ptr2!=NULL){
		if(ptr2->next==NULL){
			break;
		}
		prev=ptr1;
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
	}
	prev->next=prev->next->next;
}
int main(){
	node*head;
	add(&head,1);
	add(&head,2);
	add(&head,3);
	add(&head,4);
	add(&head,5);
	de(head);
	print(head);
	return 0;
}
