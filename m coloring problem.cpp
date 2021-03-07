#include<iostream>
#include<vector>
using namespace std;
bool cancolor(int node,vector<vector<int>>graph,
	int array[4],int m){
	int j;
		for(j=0;j<graph[node].size();j++){
			if((graph[node][j]==1)&&array[j]==m){
				return false;
			}
		}
		return true;
	}
bool color(vector<vector<int>>graph,int array[4],int node,int m){
	if(node==4){
		return true;
	}
	int i;
	for(i=1;i<=m;i++){
		if(cancolor(node,graph,array,i)){
			array[node]=i;
			if(color(graph,array,node+1,m)){
				return true;
			}
			array[node]=0;
		}
	}
	return false;
}
int main(){
	vector<vector<int>>graph={
		{
			0,1,1,1
		},{
			1,0,1,0
		},
		{
			1,1,0,1
		},{
			1,0,1,0
		}
	};
	int array[4]={
		0
	};
	int m=3;
	int i;
	color(graph,array,0,m);
	for(i=0;i<4;i++){
		cout<<array[i];
	}
	return 0;
}