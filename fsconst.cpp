#include<iostream>
using namespace std;

class B{
	private:
		int key;
	public:
		static  int data;
		B(){
			data++;
			key=5;
		}
		static void show(){
			cout<<data;
		}
		friend void get_key(B b);
		friend class A;
};
class A{
	public:
		int data;
		const void show(){
			cout<<data;
		}
		void get_key(B b){
			cout<<b.key;
}
};
void get_key(B b){
	cout<<b.key;
}
int B::data=0;
int main(){
	A a;
	a.data=5;
	a.show();
	B b;
	B b1;
	B::show();
	a.get_key(b1);
	
	return 0;
}