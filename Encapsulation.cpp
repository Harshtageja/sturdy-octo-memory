#include<iostream>
using namespace std;
class car{
	void funcb(){
		cout<<"Hello";
	}
	public:
		void drive(){
			cout<<"I am driving";
		}
	protected:
		void repair(){
		cout<<"\nrepairing...";
	}
};
class mechanic: protected car{
	public:
		
		void repair(){
			car::repair();
		}
};
int main(){
	car audi;
	audi.drive();
	//audi.repair();
	mechanic mahesh;
	mahesh.repair();
	return 0;
}