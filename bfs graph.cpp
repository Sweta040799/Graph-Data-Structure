#include <bits/stdc++.h>
#include <list>
using namespace std;

class graph{
	int vertices;
	list<int> *a;
	public:
		add_to_list(int x,int y);
	    graph(int vertices);
	    BFS(int start);	
};
graph::graph(int v){
	this->vertices=v;
	a = new list <int> [v] ;
}
 graph::add_to_list(int x,int y){
 	a[x].push_back(y);
 	
 }
 graph::BFS(int start){
 	int *visit = new int[vertices];
 	
 	for(int i=0;i<vertices;i++)
 	   visit[i]=0;
 	   
 	   list <int> queue;
 	   
 	 visit[start]=1;
 	 queue.push_back(start);
 	  list <int>::iterator it;
 	 
 	 while(!queue.empty()){
 	 	start=queue.front();
 	 	cout<<start<<" ";
 	 	queue.pop_front();
	  
	
	 
	 for(it=a[start].begin();it!=a[start].end();it++){
	 	if(!visit[*it]){
	 		visit[*it]=1;
	 		queue.push_back(*it);
	 		
		 }
	 }
}
 	   
	 
 }
int main(){
	
	int v,e;
	cin>>v>>e;
	graph obj(v);
	while(e--){
		int x,y;
		cin>>x>>y;
		obj.add_to_list(x,y);		
	}
	int r;
	cin>>r;
	 obj.BFS(r);
	
	
	return 0;
}

