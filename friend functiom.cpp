#include<bits/stdc++.h>
using namespace std;
class A{
	int a;
	public:
		A(){
			a=4;
		}
		void gh() const {
			cout<<"Hello";
		}
		~A(){
			cout<<"I am destroyed";
		}
		friend void show(A g);
		friend class B;
		
		
};
class B{
	public:
		void get(A g){
			cout<<g.a;
		}
};
void show(A g){
	cout<<g.a;
}
int main(){
	A d;
	B s;
	s.get(d);
	return 0;
}