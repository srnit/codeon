#include<bits/stdc++.h>
using namespace std;
int n,m;
int mat[11][11];
void dfs(int mat[11][11],int x,int y)
{
	if(mat[x][y]==0 || x<1||y<1 ||x>n || y>m)
		return;
	cout<<x<<" "<<y<<"\n";
	mat[x][y]=0;
	dfs(mat,x+1,y);
	dfs(mat,x+1,y+1);
	dfs(mat,x+1,y-1);
	dfs(mat,x,y+1);
	dfs(mat,x,y-1);
	dfs(mat,x-1,y);
	dfs(mat,x-1,y-1);
	dfs(mat,x-1,y+1);

}
int main()
{

	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>mat[i][j];
	}
	dfs(mat,1,1);
	if(mat[n][m]==0)
		cout<<"Yes\n";
	else
		cout<<"No\n";
}