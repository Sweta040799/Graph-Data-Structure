/********************************************
********* Code By Sweta *********************
*********************************************/


/********************************************
**Code of Detecting cycle in directed Graph**
*****Through Adjaency List Method************
********************************************/

#include <bits/stdc++.h>
using namespace std;

class graph{
	int vertices;
	list<int> *a;
	 bool is_cyclic_recur(int start,int visit[],int *stck);
	
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
 
 bool graph:: is_cyclic_recur(int v,int visit[],int *stck){
 	if(visit[v]==0){
 		visit[v]=1;
 		stck[v]=1;
 		
 		list<int>::iterator itr;
 		for(itr=a[v].begin();itr!=a[v].end();itr++){
 			if(!visit[*itr] && is_cyclic_recur(*itr,visit,stck))
 			return 1;
 			else if(stck[*itr])
 			return 1;
 			 
		 }
	 }
	 else
	 return 0;
 }
 
 graph:: is_cyclic(){
 	
 	int *visit = new int[vertices];
 	int *restk = new int[vertices];
 	
 	for(int i=0;i<vertices;i++){
 		visit[i]=0;
 		restk[i]=0;
	 }
	 
	 for(int i=0;i<vertices;i++){
	 	if(is_cyclic_recur(i,visit,restk))
	 	  return 1;
	 	  else
	 	  return 0;
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
	
	 if(obj.is_cyclic()==1)
	 cout<<"Cycle Found in Graph";
	 else
	 cout<<"Cycle not Found in Graph";
	
	
	return 0;
}

/***********************************************
***************OUTPUT***************************
***********************************************/


/*
4 6
0 1
0 2
1 2
2 0
2 3
3 3
Cycle Found in Graph
--------------------------------
Process exited after 63.06 seconds with return value 0
Press any key to continue . . .
*/

