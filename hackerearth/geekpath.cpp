#include<bits/stdc++.h>
using namespace std;

int  dfs(int x,int y,int path[21][21],bool visited[21][21],int n)
{
	//cout<<x<<" "<<y<<"\n";
	if(x>n || y>n || x<1 || y<1)
		return 0;
	else if(path[x][y]==2)
	{
		visited[x][y]=true;
		return 1;
		//break;
	}
	if(visited[x][y]==true)
		return 0;
	else if(path[x][y]==0)
		{
			visited[x][y]=true;
			return 0;
		}
	visited[x][y]=true;
	dfs(x+1,y,path,visited,n);
	dfs(x-1,y,path,visited,n);
	dfs(x,y+1,path,visited,n);
	dfs(x,y-1,path,visited,n);

}
int main()
{
	int t,n,source1,source2,dest1,dest2;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int path[21][21];
	bool visited[21][21]={false};
	int i=1,j=1;
	int t1=n*n;
	for(int c=1;c<=t1;c++)
	{
		
		cin>>path[i][j];
		//cout<<i<<" "<<j<<"\n";
		if(path[i][j]==1)
		{
			 source1=i;
			 source2=j;
		}
		if(path[i][j]==2)
		{
		 dest1=i;
			 dest2=j;
		}
		if(j==n)
			{i++;
		
				j=1;}
	  else
		j++;
	}
	/*for(int k=1;k<=n;k++)
	{
		for(int m=1;m<=n;m++)
			cout<<path[k][m]<<" ";
		cout<<"\n";
	}
	cout<<source1<<" "<<source2<<"\n";
	cout<<dest1<<" "<<dest2<<"\n";*/
	dfs(source1,source2,path,visited,n);
	if(visited[dest1][dest2]==true)
		cout<<"1\n";
	else
		cout<<"0\n";
}

}