#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct node{
	int data;
	node*next;
};
node*add(node*head,int data){
	node*temp=new node;
	temp->data=data;
	if(head==NULL)
	return temp;
	node*c=head;
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
void nfl(node*head,int n){
	stack<int>h;
	while(head!=NULL){
		h.push(head->data);
		head=head->next;
	}
	int i=1;
	while(n!=i){
		h.pop();
		i++;
	}
	cout<<h.top();
}
int main(){
	node*head;
	head=add(head,1);
	head=add(head,2);
	head=add(head,3);
	nfl(head,1);
	return 0;
}