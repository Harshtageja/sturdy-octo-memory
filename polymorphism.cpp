#include<iostream>
using namespace std;
class base{
	public:
		virtual void print(){
			cout<<"this is base";
		}
};
class derived:public base{
	public:
		void print(){
			cout<<"this is derived";
			}
};
class complex{
	public:
		int r;
		int i;
		friend ostream &operator<<(ostream&os,complex a);
};
ostream &operator<<(ostream&os,complex a){
	cout<<a.r<<"+j"<<a.i;
}
int main(){
	derived a;
	a.print();
	base *ptr;
	ptr=&a;
	ptr->print();
	complex v;
	v.r=5;
	v.i=4;
	cout<<v;
	return 0;
}