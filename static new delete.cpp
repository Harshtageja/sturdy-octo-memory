#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class box{
	public:
		static int count;
		box(){
			count++;
		}
};
class node{
	public:
		int data;
		node*head;
};
int box::count=0;
int main(){
	box b1;
	box b2;
	//cout<<b2.count;
	node*head=new node;
	head->data=5;
	delete(head);
	cout<<head->data;
	return 0;
}