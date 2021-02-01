#include<iostream>
using namespace std;
class A{
	int a;
	public:
		int b;
	protected:
		int c;
};
class B:private A{
	int d;
	public:
		int e;
		void set(int a){
			b=a;
		}
		void dis(){
			cout<<b;
		}
	protected:
		int f;
};
int main(){
	B hello;
	hello.set(5);
	hello.dis();
	return 0;
}