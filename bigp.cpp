#include<bits/stdc++.h>
using namespace std;
 int level[10002];
 bool visited[10002];
vector<int> vec[10002];
void bfs(int p)
{
	memset(visited,false,sizeof(visited));

	queue<int> q;
	level[p]=0;
	q.push(p);
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(int i=0;i<vec[node].size();i++)
		{
			int childenode=vec[node][i];
			//cout<<vec[node][i]<<" ";
			if(level[childenode]==-1 && visited[childenode]==false)
			{   visited[childenode]=true;
				level[childenode]=level[node]+1;
				q.push(childenode);
			}
			/*else if((childenode!=p) && ((level[childenode]-1)<node))
			{
				level[childenode]==level[node]+1;
				q.push(childenode);
			}
			*/
		}
	}
}
int main()
{
	int x,y,a,b;
	cin>>a>>b;
	memset(level,-1,sizeof(level));
	for(int i=0;i<b;i++)
	{
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
   bfs(0);
   for(int i=0;i<a;i++)
   {
   	cout<<level[i]<<"\n";
   }
}