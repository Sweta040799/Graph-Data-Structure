/********************************************
********* Code By Sweta ********************
********************************************/


/********************************************
*******Code of DFS for directed Graph********
*****Through Adjaency List Method**********
********************************************/

#include<bits/stdc++.h>
using namespace std;

class Graph{
	int vertex;
	list <int> *ar;
	  dfs_recur(int s,int visit[]);
	 public:
	 	Graph(int v);
	 	add_to_list(int u,int w);
	 	dfs(int s);
	 	
};
Graph::Graph(int v){
	this->vertex=v;
	ar=new list <int> [v];
}
Graph::add_to_list(int u,int w){
	ar[u].push_back(w);
}
Graph::dfs_recur(int s,int visit[]){
	visit[s]=1;
	cout<<s<<" ";
	
	 list <int>::iterator itr;
	 
	 for(itr=ar[s].begin();itr!=ar[s].end();itr++){
	 	  if(!visit[*itr])
	 	  dfs_recur(*itr,visit);
	 }
}
Graph::dfs(int s){
	int *visit=new int [vertex];
	
	for(int i=0;i<vertex;i++)
	visit[i]=0;
	
	dfs_recur(s,visit);
}
int main(){
	int v, e;
	cin>>v>>e;
	Graph ob(v);
	while(e--){
		int x,y;
		cin>>x>>y;
		
		ob.add_to_list(x,y);
	}
	int r;
	cin>>r;
	ob.dfs(r);

return 0;	
}

/***********************************************
***************OUTPUT***************************
***********************************************/


/*
4 6   enter vertex and edges respectively
0 1   enter edges times vertices linked together
0 2
1 2
2 0
2 3
3 3
2     the verteices from where the traversal starts
2 0 1 3   output
--------------------------------
Process exited after 26.62 seconds with return value 0
Press any key to continue . . .
*/

