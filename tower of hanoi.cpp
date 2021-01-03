#include<iostream>
using namespace std;
void tower(int n,char src,char dest,char help){
	if(n==0){
		return;
	}
	tower(n-1,src,help,dest);
	cout<<src<<"to"<<dest<<"\n";
	tower(n-1,help,dest,src);
}
int main(){
	tower(4,'A','B','C');
	return 0;
}