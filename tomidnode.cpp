#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool path(int maze[9][9],int i,int j,vector<int>&p1,
	vector<int>&p2)
{
	if(i==4&&j==4){
		return true;
	}
	int v=maze[i][j];
	
	cout<<i<<j<<v<<"\n";
	vector<int>::iterator it1;
	vector<int>::iterator it2;
	it1=find(p1.begin(),p1.end(),i);
	it2=find(p2.begin(),p2.end(),j);
	if(it1!=p1.end()&&it2!=p2.end()){
			int d=it1-p1.begin();
			int f=it2-p2.begin();
			if(d==f)
			return false;
	}
	p1.push_back(i);
	p2.push_back(j);
	cout<<i<<j<<v<<"\n";
	if((i+v<9)&&path(maze,i+v,j,p1,p2)){
		cout<<i<<" "<<j<<"\n";
		return true;
	}
	if((i-v>-1)&&path(maze,i-v,j,p1,p2)){
		cout<<i<<" "<<j<<"\n";
		return true;
	}
	if((j+v<9)&&path(maze,i,j+v,p1,p2)){
		cout<<i<<" "<<j<<"\n";
		return true;
	}
	if((j-v>-1)&&path(maze,i,j-v,p1,p2)){
		cout<<i<<" "<<j<<"\n";
		return true;
	}
	p1.pop_back();
	p2.pop_back();
	return false;
	
}
int main(){
	int maze[9][9] =

    {

        { 3, 5, 4, 4, 7, 3, 4, 6, 3 },

        { 6, 7, 5, 6, 6, 2, 6, 6, 2 },

        { 3, 3, 4, 3, 2, 5, 4, 7, 2 },

        { 6, 5, 5, 1, 2, 3, 6, 5, 6 },

        { 3, 3, 4, 3, 0, 1, 4, 3, 4 },

        { 3, 5, 4, 3, 2, 2, 3, 3, 5 },

        { 3, 5, 4, 3, 2, 6, 4, 4, 3 },

        { 3, 5, 1, 3, 7, 5, 3, 6, 4 },

        { 6, 2, 4, 3, 4, 5, 4, 5, 1 }

    };
    vector<int>p1;
    vector<int>p2;
    int i,j;
   path(maze,0,0,p1,p2);
    for(i=0;i<p1.size();i++){
    	cout<<p1[i];
    	cout<<"\n";
    }
	return 0;
}