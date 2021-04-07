#include<bits/stdc++.h>
using namespace std;
class parent{
	public:
		int data;
};
class child1:virtual public parent{
	
};
class child2:virtual public parent{
	
};
class grand:protected child1,protected child2{
	public:
		void show(){
			cout<<data;
		}
		grand(){
			data=5;
		}
		friend void getit(grand a);
};
class A{
	private:
		int data;
	public:
		A(){
			data=5;
		}
		friend class B;
};
class B{
	public:
		void show(A a){
			cout<<a.data;
			
		}
	
};
void getit(grand a){
	cout<<a.data;
}
int main(){
	A a;
	B b;
	b.show(a);
	return 0;
}