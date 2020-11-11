#include<iostream>
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
	node*ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	return head;
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}
node*remove(node*head){
	node*c=head;
	while(head->next!=NULL){
		if(head->data==head->next->data){
			head->next=head->next->next;
		}
		else
		head=head->next;
	}
	return c;
}
int main(){
	node*head;
	head=add(head,3);
	head=add(head,3);
	head=add(head,3);
	head=add(head,3);
	remove(head);
	print(head);
	return 0;
}