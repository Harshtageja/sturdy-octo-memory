#include<iostream>
#include<cmath>
using namespace std;
class complex{
	public:
		float r;
		float i;
		friend ostream &operator<<(ostream &os,complex a);
		friend complex operator /(complex a,complex b);
};
complex operator /(complex a,complex b){
	complex c;
	float r1= sqrt(a.r*a.r+a.i*a.i);
	float r2= sqrt(b.r*b.r+b.i*b.i);
	r1/=r2;
	float a1=atan(a.i/a.r);
	if(a.r>0&&a.i<0){
		a1+=2*M_PI;
	}
	else if(a.r<0&&a.i>0){
		a1+=M_PI;
	}
	float a2=atan(b.i/b.r);
	if(b.r>0&&b.i<0){
		a2+=2*M_PI;
	}
	else if(b.r<0&&b.i>0){
		a2+=M_PI;
	}
	a1-=a2;
	c.r=r1*cos(a1);
	c.i=r1*sin(a1);
	
	return c;
}
ostream &operator <<(ostream &os,complex a){
	cout<<a.r<<"+"<<a.i<<"j";
}

int main(){
	complex a;
	complex b;
	a.r=1;
	b.r=6;
	a.i=0;
	b.i=-2;
	complex c=a/b;
	cout<<c;
	return 0;
}