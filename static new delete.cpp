#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node*next;
};
class Box{
	public:
		static int count;
		int l;
		Box(){
			count++;
		}
};
int Box::count=0;
int main(){
	node*head=new node;
	head->data=5;
	delete head;
	Box b1;
	Box b2;
	cout<<b2.count;
	return 0;
}