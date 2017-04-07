#include<bits/stdc++.h>
using namespace std;
vector < int >vec[10000+1];
int visited [10000+1];
void dfs_util(int );
void initialise(int n)
{
	for(int i=1;i<=n;i++)
	{
		visited[i]=0;
	}
}
void dfs_util(int s)
	{
		int temp;
		stack<int>s1;
		visited[s]=1;
		s1.push(s);
		while(!s1.empty())
		{
			temp=s1.top();
			s1.pop();
			for(int  i=0;i<vec[temp].size();i++)
			{
				if(visited[vec[temp][i]]==0)
				{
					visited[vec[temp][i]]=1;
					s1.push(vec[temp][i]);
				}
			}
		}
       return ;
	}

void dfs(int source)
{
	//int temp;
	
	visited[source]=1;
	for(int i=0;i<vec[source].size();i++)
	{
		if(visited[vec[source][i]]==0)
			dfs_util(vec[source][i]);
	}
	
return;

}
int main()
{
	int n,m,source,conected,x,y;
	conected=0;
	cin>>n>>m;
	
	initialise(n);
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	cin>>source;
	dfs(source);
	for(int i=1;i<=n;i++)
	{
		//cout<<visited[i]<<"\n";
		if(visited[i]==0)
		{	//dfs(i);
            conected++;
		}
		//source=i;

	}
	cout<<conected<<"\n";




}