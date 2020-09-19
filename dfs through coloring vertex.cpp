/********************************************
********* Code By Sweta ********************
********************************************/


/********************************************
*******Code of DFS for directed Graph********
*************by Coloring Vertex*************
*****Through Adjaency List Method***********
********************************************/

#include <bits/stdc++.h>
#include <list>

enum coloration {WHITE,GRAY,BLACK};
using namespace std;




class graph{
	int vertices;
	list<int> *a;
	bool is_cyclic_recur(int s,int color[]);
	
	public:
		 graph(int vertices);
		 
		 add_to_list(int x,int y);
	   
	     is_cyclic();	
	   
};

graph::graph(int v){
	this->vertices=v;
	a = new list <int> [v] ;
}
 graph::add_to_list(int x,int y){
 	a[x].push_back(y);	
 }
 
 bool graph:: is_cyclic_recur(int s,int color[]){
 	
 	
 	color[s]=GRAY;
 	list <int>:: iterator t;
 	for(t=a[s].begin();t!=a[s].end();t++){
 		int r= *t;
 		if(color[r]==GRAY)
 		return true;
 		
 		else if(color[r]==WHITE && is_cyclic_recur(r,color))
 		return true;
	 }
	 color[s]=BLACK;
	 return false;
 }
 graph::is_cyclic(){
 	int *color = new int[vertices];
 	
 	for(int i=0;i<vertices;i++)
 	   color[i]=WHITE;
 	   
 	 
 	for(int i=0;i<vertices;i++){
 		if(color[i]==WHITE)
 		  if(is_cyclic_recur(i,color)==true)
 		  return true;
 		  
 		  else
 		  return false;
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

	
	
	    if(obj. is_cyclic())
		cout<<"Cycle Exist in the graph"<<endl;	
		else
		cout<<"Cycle doesnot Exist in the graph"<<endl;	
	
	
	return 0;
}

/***********************************************
***************OUTPUT***************************
***********************************************/


/*
4 4
0 1
0 2
1 2
2 3
Cycle doesnot Exist in the graph

--------------------------------
Process exited after 13.8 seconds with return value 0
Press any key to continue . . .
*/

