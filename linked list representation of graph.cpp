/********************************************
********* Code By Sweta ********************
********************************************/


/********************************************
*******Code of Graph Reprentation************
*****Through Linked List Method**************
********************************************/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int v,e;
	cin>>v>>e;
	
		list<pair <int,int> > lst[v];
	while(e--){
		int x,y,w;
		cin>>x>>y>>w;
		lst[x].push_back(make_pair(y,w));	
			lst[y].push_back(make_pair(x,w));	
	}
	
		list<pair <int,int> >::iterator it;
	for(int i=0;i<v;i++){
		for(it=lst[i].begin();it!=lst[i].end();it++){
			cout<<i<<"->"<<(*it).first<<","<<(*it).second<<" ";
		}
		cout<<endl;
	}
}

/***********************************************
***************OUTPUT***************************
***********************************************/


/*
9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
 4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
0->1,4 0->7,8
1->0,4 1->2,8 1->7,11
2->1,8 2->3,7 2->8,2 2->5,4
3->2,7 3->4,9 3->5,14
4->3,9 4->5,10
5->2,4 5->3,14 5->4,10 5->6,2
6->5,2 6->7,1 6->8,6
7->0,8 7->1,11 7->6,1 7->8,7
8->2,2 8->6,6 8->7,7

--------------------------------
Process exited after 2.33 seconds with return value 0
Press any key to continue . . .*/

