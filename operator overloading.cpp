#include<iostream>
using namespace std;
class complex{
	public:
		int r,i;
		complex(int a,int b){
			r=a;
			i=b;
		}
		void operator++(){
			r++;
		}
		bool operator <(complex a){
			if(r<a.r){
				return true;
			}
			return false;
		}
		friend ostream &operator<<(ostream&os,complex a);
};
ostream &operator<<(ostream&os,complex a){
	cout<<a.r<<"+i"<<a.i;
}
int main(){
	complex a(5,4);
	complex b(3,4);
	++a;
	if(b<a)
	cout<<a;
	
	
	return 0;
}