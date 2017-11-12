#include<bits/stdc++.h>
using namespace std;
#define max 10001
pair<int,pair<int,int> >p[max];
int parent[10001];
bool find1(int x,int y)
{
	if(parent[x]==parent[y])
		return true;
	else
		return false;
}
void union1(int a,int b,int n)
{
	int temp=parent[a];
	for(int i=1;i<=n;i++)
	{
		if(parent[i]==temp)
			parent[i]=parent[b];
	}
}
long long int mincost(int n)
{
	
	long long int cost=0;
	for(int i=1;i<=n;i++)
	{
	int x=p[i].second.first;
	int y=p[i].second.second;
	int w=p[i].first;

	if(!find1(x,y))
	{
		cout<<"--"<<w<<"\n";
		cost+=w;
		union1(x,y,n);
	}
 }
 return cost;
}
int main()
{
   int n,m,x,y,w;
   cin>>n>>m;
   for(int i=1;i<=n;i++)
     parent[i]=i;
   for(int i=0;i<m;i++)
   {
      cin>>x>>y;
      p[i]=make_pair(1,make_pair(x,y));
   }
   sort(p,p+m);
   for(int i=0;i<m;i++)
   	cout<<p[i].first<<" ";
  cout<<mincost(n)<<"\n";
}