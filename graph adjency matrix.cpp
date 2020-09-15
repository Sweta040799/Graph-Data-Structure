/********************************************
********* Code By Sweta *********************
********************************************/


/********************************************
*******Code of Undirected Graph**************
*****Through Adjaency Matrix Method**********
********************************************/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,e; //declaring vertices(v) or node and edges(e)
    cin>>v>>e;  //user to give the vertices and edges
    int a[v][v]={0};   //matrix to store the connection
    cout<<"Enter the two vertices that are connected";
    while(e--){
    	 
    int x,y; //variables declared for the two Nodes that are connected 
    cin>>x>>y;
    a[x][y]=1;  //since it is an undirected graph so specifying 1 for both(x,y)
    a[y][x]=1;  //and (y,x)   
	}
   for(int i=0;i<v;i++){  //loop for displaying the graph connections
    	for(int j=0;j<v;j++){
    		if(a[i][j]==1)
    		cout<<i<<"->"<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}


/***********************************************
***************OUTPUT***************************
***********************************************/

/*
5 7
Enter the two vertices that are connected  0 1
1 2
2 3
3 4
4 0
4 1
3 1
0->1 0->4
1->0 1->2 1->3 1->4
2->1 2->3
3->1 3->2 3->4
4->0 4->1 4->3

--------------------------------
Process exited after 46.72 seconds with return value 0
Press any key to continue . . .*/
