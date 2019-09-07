#include <iostream>
using namespace std;

int visited[10];
int n;
int a[10][10];
 void dfs(int i)
 {
	if(visited[i]==1) return;
	visited[i]=1;
	for(int j=0;j<n;j++)
	{
		if(a[i][j]==1 && visited[j]==0)
			dfs(j);
	}
	cout<<i<<" ";
 }
 int main()
 {
	 cout<<"Enter the no of vertices in the graph\n";
	 cin>>n;
	 cout<<"Enter the adjacency matrix\n";
	 for(int i=0;i<n;i++)
	 {
		 for(int j=0;j<n;j++)
		 {
			 cin>>a[i][j];
		 }
	 }
	 for (int i=0;i<n;i++)
		 visited[i]=0;
		 cout<<"Connected components are:\n";
		 clock_t start,end,t;
		 start=clock();
		 for(int i=0;i<n;i++)
		 {
			 dfs(i);
			 cout<<"\n";
		 }
		 end=clock();
		 t=end-start;
		 cout<<"/nRuntime is: "<<(float)t/CLOCKS_PER_SEC<<"sec\n\n";
		 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
