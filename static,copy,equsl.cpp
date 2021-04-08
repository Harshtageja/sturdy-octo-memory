#include<bits/stdc++.h>
using namespace std;
class Box{
	public:
		static int count;
		Box(){
			count++;
		}
		static void show(){
			cout<<count;
		}
};
class A{
	public:
		int data;
		A(){
			
		}
		A(int d){
			data=d;
		}
		A(A& c){
			data=c.data;
		}
};
int Box::count=0;
int main(){
	Box b1;
	Box b2;
	Box::show();
	A a;
	a.data=5;
	A b=a;
	cout<<b.data;
	A c(b);
	cout<<c.data;
	return 0;
}