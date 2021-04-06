#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		 virtual void show()=0;
};
class B:public A{
	public:
		void show(){
			cout<<"this is derived";
		}
};
int main(){
	B a;
	A* ptr;
	ptr=&a;
	ptr->show();
	return 0;
}