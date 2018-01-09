#include<bits/stdc++.h>
using namespace std;
# define INF 1000000000
typedef pair<int,int> pii;
vector<pii>vec[10001];
int visited[10001]={0};

void djk(int s,int n)
{
	priority_queue<pii,vector<pii>,greater<pii> >pq;
	//int visited[n+1]=0;
	visited[s]=1;
	vector<int>dist(n,INF);
	dist[s]=0;
	pq.push(make_pair(0,s));
	while(!pq.empty())
	{
      int nebh=pq.top().second;
      pq.pop();
      //cout<<"nebh--"<<nebh<<"\n";
      //cout<<"dist[nebh]--"<<dist[nebh]<<"\n";
      for(int i=0;i<vec[nebh].size();i++)
      {
      	int y=vec[nebh][i].first;
      	int w=vec[nebh][i].second;
      	if(dist[y]>dist[nebh]+w)
      	{
      		dist[y]=dist[nebh]+w;

      		pq.push(make_pair(dist[y],y));
      	}
      }
  }
     for(int i=2;i<=n;i++)
     {
     	
     		cout<<dist[i]<<" ";
     }

	
	
}
int main()
{
  int n,m,u,v,w;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
  	cin>>u>>v>>w;
  	vec[u].push_back(make_pair(v,w));

  }
  djk(1,n);
  cout<<"\n";

}