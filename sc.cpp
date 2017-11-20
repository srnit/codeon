#include<bits/stdc++.h>
using namespace std;
stack<int>q;
int count1=0;
void init(int vis[],int n)
{
	for(int i=1;i<=n;i++)
		vis[i]=0;

}
void dfs1(int vis[],vector<int> adj[],int s)
{
	vis[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
			dfs1(vis,adj,adj[s][i]);
	}
	q.push(s);

}
int  dfs2(int vis[],vector<int> adj_rev[],int s/*int count*/)
{
	vis[s]=1;
	//cout<<s<<"->";
    count1+=1;
	for(int i=0;i<adj_rev[s].size();i++)
	{
		if(!vis[adj_rev[s][i]])
			{dfs2(vis,adj_rev,adj_rev[s][i]);
				
			}
	}
	//q.push(s);
 
}
int main()
{
	//count=0;
	int count=0;
	int n,m,a,b;
	cin>>n>>m;
	vector<int>adj[n+1];
	vector<int>adj_rev[n+1];
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj_rev[b].push_back(a);
	}
	int vis[n+1];
	init(vis, n);

	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			dfs1(vis,adj,i);
		}
	}
	int c=0;
	int d=0;
	init(vis, n);
	while(!q.empty())
	{
		int x=q.top();
		q.pop();
		if(!vis[x])
		{
			vis[x]=1;
		dfs2(vis,adj_rev,x);
		//cout<<sum<<"\n";
		if(count1%2==0)
		{	d+=count1;
			count1=0;
		}
		else
		{
			c+=count1;
			count1=0;
		}
      // cout<<"\n";
   }

	}
	cout<<c-d<<"\n";

}