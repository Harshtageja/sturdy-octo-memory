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

void merge(node*head1,node*head2){
	node*c,*p,*prev;
	while(head1!=NULL&&head2!=NULL){
		c=head1->next;
		p=head2->next;
		head1->next=head2;
		head2->next=c;
		prev=head2;
		head1=c;
		head2=p;
	}
	if(head2!=NULL){
		prev->next=head2;
	}
}
int main(){
	node*head1,*head2;
	head1=add(head1,5);
	head1=add(head1,8);
	head2=add(head2,4);
	head2=add(head2,6);
	merge(head1,head2);
	print(head1);
	return 0;
}
    